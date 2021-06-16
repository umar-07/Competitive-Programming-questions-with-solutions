#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, z;
        cin >> n >> z;
        int arr[n], m[n];
        int k=n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            m[i]=arr[i]*k;
            k--;
        }
        sort(m, m+n);
        cout << m[0] << endl;
    }
    return 0;
}
