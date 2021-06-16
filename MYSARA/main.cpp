#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll b[n];
        for(int i=0; i<n; i++)
            cin >> b[i];
        ll res=1;
        for(int j=0; j<n-1; j++)
        {
            ll x = b[j];
            ll y = b[j+1];
            ll x_b[35]={0};
            ll y_b[35]={0};
            for(int i = 34; i >= 0; i--)
            {
                ll k = x >> i;
                if(k & 1)
                    x_b[i]=1;
                else
                    x_b[i]=0;
            }
            for(int i = 34; i >= 0; i--)
            {
                ll k = y >> i;
                if(k & 1)
                    y_b[i]=1;
                else
                    y_b[i]=0;
            }
            //cout << "X_B: " << endl;
            //for(int i=0; i<35; i++)
            //    cout << x_b[i] << " ";
            //cout << endl;
            //cout << "Y_B: " << endl;
            //for(int i=0; i<35; i++)
            //    cout << y_b[i] << " ";
            //cout << endl;
            for(int i=0; i<35; i++)
            {
                if(x_b[i]==1 && y_b[i]==1)
                    res = (res*2)%m;
            }
        }
        cout << res << endl;
    }
    return 0;
}
