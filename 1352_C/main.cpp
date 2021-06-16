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
        ll m=n-1;
        //if(k<=m)
       // {
            //FIRST SEGMENT
       // }
        //else
        {
            ll num;
            ll div = ceil(k*1.0/m*1.0);
            //debug(div)
            ll lb = n*(div-1);
            ll rem = k%m;
            //debug(lb)
            //debug(rem)
            if(rem==0)
            {
                num=lb+m;
            }
            else
                num=lb+rem;
            cout << num << endl;
        }
    }
	return 0;
}
