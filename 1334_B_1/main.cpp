#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        for(int i=0; i<n;  i++)
            cin >> arr[i];
        ll suf[n];
        sort(arr, arr+n);
        suf[n-1]=arr[n-1];
        for(int i=n-2; i>=0; i--)
        {
            suf[i]=arr[i]+suf[i+1];
        }
        /*for(int i=0; i<n; i++)
            cout << suf[i] << " ";
        cout << endl;*/
        int flag=0;
        int idx=-1;
        for(int i=0; i<n; i++)
        {
            ll k = n-i;
            if(suf[i] >= k*x)
            {
                //cout << "k*suf[i], k*x, i " << k*suf[i] << " " << k*x << " " << i << endl;
                idx=i;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout << "0" << endl;
        else
            cout << n-idx << endl;
    }
    return 0;
}
