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
        ll a, b;
        cin >> a >> b;
        if(a==b)
        {
            cout << "0" << endl;
            continue;
        }
        else
        {
            ll maxi=max(a,b);
            ll mini=min(a,b);
            if(maxi%mini!=0)
            {
                cout << "-1" << endl;
                continue;
            }
            ll k=maxi/mini;
            ll c=0;
            int flag=0;
            while(k>=8 && k%8==0 && k!=1)
            {
                k=k/8;
                c+=1;
            }
            while(k>=4 && k%4==0 && k!=1)
            {
                k=k/4;
                c+=1;
            }
            while(k>=2 && k%2==0 && k!=1)
            {
                k=k/2;
                c+=1;
            }
            if(k==1)
            {
                cout << c << endl;
                continue;
            }
            else
                cout << "-1" << endl;
        }
    }
	return 0;
}
