#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        for(int i=0; i<n; i++)
        {
            a[i]=a[i]*20;
        }
        for(int i=0; i<n; i++)
        {
            b[i]=b[i]*10;
        }
        int arr[n];
        for(int i=0; i<n; i++)
        {
            if(a[i]>b[i])
            {
                arr[i]=a[i]-b[i];
            }
            else
                arr[i]=0;
        }
        int l=*max_element(arr, arr+n);
        cout << l << endl;
    }
    return 0;
}
