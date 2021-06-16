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
        ll ans;
        if(n%2==0)
        {
            ans = k%n;
            if(ans==0)
                ans=n;
        }
        else
        {
            ll skip=0;
            ll d = (n+1)/2;
            int flag=0;
            if(d==2)
            {
                ans = k + (k-1);
                ans = ans%n;
                if(ans==0)
                    ans=n;
                flag=1;
            }
            if(flag==0)
            {
                d--;
                skip = k/d;
                if(k%d==0)
                    skip--;
                ans = (k+skip)%n;
                if(ans==0)
                    ans=n;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
