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
        if(n==1)
            cout << "0" << endl;
        else
        {
            ll h[n+1]={0};
            for(int i=0; i<n; i++)
            {
                h[arr[i]]++;
            }
            ll maxi=-1;
            ll idx=-1;
            for(int i=0; i<n+1; i++)
            {
                if(h[i]>maxi)
                {
                    maxi=h[i];
                    idx=i;
                }
            }
            ll un=0;
            for(int i=0; i<n+1;i++)
            {
                if(h[i]>=1 && i!=idx)
                    un++;
            }
            if(un>=maxi)
                cout << maxi << endl;
            else
            {
                if(abs(maxi-un)>1)
                    cout << un+1 << endl;
                else
                    cout << un << endl;
            }
        }
    }
    return 0;
}
