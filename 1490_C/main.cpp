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
        if(n>=1 && n<=8 && n!=2)
        {
            cout << "NO" << endl;
            continue;
        }
        if(n==2 || n==9)
        {
            cout << "YES" << endl;
            continue;
        }
        ll maxi = cbrt(n);
        maxi++;
        int flag=0;
        for(ll i=1; i<=maxi; i++)
        {
            ll j=i*i*i;
            if(j>n)
                break;
            ll rem = n-j;
            ll cub = cbrt(rem);
            ll new_rem = cub*cub*cub;
            if(rem==new_rem)
            {
                flag=1;
                continue;;
            }
            /*if(i==5779)
            {
                debug(i);
                debug(j);
                debug(rem);
                debug(cub);
                debug(new_rem);

                debug(flag);
                cout << endl;
            }*/
        }
        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
