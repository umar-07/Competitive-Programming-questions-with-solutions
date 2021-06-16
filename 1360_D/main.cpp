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
        if(k==1)
            cout << n << endl;
        else if(n<=k)
            cout << "1" << endl;
        else
        {
            ll g=0;
            int flag=0;
            for(int i=2; i*i<=n; i++)
            {
                //debug(g) cout << endl;
                //debug(i) cout << endl;
                if(i>k)
                    break;
                if(n%i==0)
                {
                    ll p = n/i;
                    ll j = i;
                    if(p<=k)
                    {
                    //    cout << "p" << endl;
                    //debug(p) cout << endl;
                        if(p>g)
                            g=p;
                        flag=1;
                    }
                    if(i<=k)
                    {
                    //cout << "i" << endl;
                    //debug(i) cout << endl;
                        if(i>g)
                            g=i;
                        flag=1;
                    }
                }
            }
            if(flag)
            {
            ll res1=g;
            ll res2=n/g;
            cout << res2 << endl;
            }
            else
                cout << n << endl;
        }
    }
	return 0;
}
