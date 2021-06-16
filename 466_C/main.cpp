#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    ll pre[n];
    ll suf[n];
    pre[0]=arr[0];
    suf[n-1]=arr[n-1];
    for(int i=1; i<n; i++)
        pre[i]=pre[i-1]+arr[i];
    for(int i=n-2; i>=0; i--)
        suf[i]=suf[i+1]+arr[i];
    ll avg = pre[n-1]/3;
    if(pre[n-1]%3!=0)
        cout << "0" << endl;
    else
    {
        ll cal[n]={0};
        for(int i=n-1; i>=0; i--)
        {
            if(suf[i]==avg)
                cal[i]=1;
        }
        for(int i=n-2; i>=0; i--)
            cal[i]=cal[i+1]+cal[i];
        ll c=0;
        for(int i=0; i<n; i++)
        {
            if(pre[i]==avg)
            {
               if(i+2<n)
               {
                   c+=cal[i+2];
               }
            }
        }
        cout << c << endl;
    }
    return 0;
}
