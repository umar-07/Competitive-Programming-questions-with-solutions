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
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cin >> x;
        ll sum=0;
        for(int i=0; i<n; i++)
            sum+=arr[i];
        ll pre[n]={0};
        pre[0]=arr[0];
        for(int i=1; i<n; i++)
            pre[i]= pre[i-1] + arr[i];
        ll err = sum - x;
        cout << "SUM: " << sum << endl;
        cout << "ERROR: " << err << endl;
        ll pre_sort[n];
        for(int i=0; i<n; i++)
            pre_sort[i]=pre[i];
        sort(pre_sort, pre_sort+n);
        cout << "PREFIX ARRAY: " ;
        for(int i=0; i<n; i++)
            cout << pre[i] << " ";
        cout << endl;
        int flag=0;
        cout << "TEMP: ";
        for(int i=0; i<n; i++)
        {
            ll temp = pre[i] + err;
            cout << temp << " ";
            if(binary_search(pre_sort, pre_sort+n, temp))
            {
                flag=1;
                break;
            }
        }
        cout << endl;
        if(flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
