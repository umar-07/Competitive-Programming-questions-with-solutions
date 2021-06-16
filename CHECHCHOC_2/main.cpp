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
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        if(n==1 && m==1)
        {
            cout << min(x,y) << endl;
            continue;                       //Check
        }
        else if(y==1)
        {
            ll k = n*m;
            if(k%2==0)
                cout << k/2 << endl;
            else
                cout << k/2 + 1 << endl;
            continue;
        }
        else if(y>=2*x)
        {
            ll sol = (m*n*x);
            cout << sol << endl;
            continue;
        }
        else
        {
            ll lim=y;
            ll high, low;
            if(lim%2!=0)
            {
                high=lim/2 + 1;
                low= lim/2;
            }
            else
            {
                high=lim/2;
                low=lim/2;
            }
            //debug(high);
            //debug(low);
            ll sum=0;
            if(n%2!=0 && m%2!=0)
            {
                ll up = (n*m)/2 +1;
                ll down = (n*m)/2;
                sum = (up*high) + (down*low);
            }
            else
            {
                ll mid=(n*m)/2;
                sum = (high*mid) + (low*mid);
            }


            ll sum2=0;
            ll mini = min(x,y);
            if(n%2!=0 && m%2!=0)
            {
                sum2 = ((m*n)/2 + 1) * mini;
            }
            else
            {
                sum2 = ((m*n)/2) * mini;
            }

            ll maxi = max(sum, sum2);
            cout << maxi << endl;
            continue;
        }
    }
	return 0;
}
