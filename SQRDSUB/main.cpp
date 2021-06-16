#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll c=0;
        int f=0;
        for(int i=0; i<n; i++)
        {
           if(arr[i]%4==2 || arr[i]%4==-2)
           {
                ll k = (i-f);
                ll p = k*(k+1);
                p=p/2;
                c+=p;
                f=i;
           }
        }
        if(f!=n-1)
        {
            ll k = (n-1)-f;
            ll p = k*(k+1);
            p=p/2;
            c+=p;
        }
        cout << c << endl;
    }
    return 0;
}
