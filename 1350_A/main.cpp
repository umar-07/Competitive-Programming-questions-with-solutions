#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll sum=n;
        if(n%2==0)
        {
            sum+= (k*2);
        }
        else
        {
            ll rem=INT_MAX;
            for(int i=1; i<=sqrt(n); i++)
            {
                if(n%i==0)
                {
                    if(n/i==i)
                    {
                        if(i<rem && i!=1)
                            rem=i;
                    }
                    else
                    {
                        ll k = n/i;
                        if(k < rem && k!=1)
                            rem=k;
                        if(i<rem && i!=1)
                            rem=i;
                    }
                }
            }
            sum+=rem;
            sum+= ((k-1)*2);
        }
        cout << sum << endl;
    }
	return 0;
}
