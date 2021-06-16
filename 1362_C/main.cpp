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
        ll n;
        cin >> n;
        ll sum=0;
        ll itr=1;
        while(n>0)
        {
            ll c=0;
            if(n%2!=0)
                c+=1;
            c+= (n/2);
            sum+= (itr*c);
            itr++;
            n=n/2;
        }
        cout << sum << endl;
    }
	return 0;
}
