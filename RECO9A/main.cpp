#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int sum=0;
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
        sum+=arr[i];
    int diff=k-sum;
    if(diff<0)
        cout << "NO" << endl;
    else
    {
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(diff==arr[i])
                flag=1;
        }
        if(flag==1)
            cout << "NO" << endl;
        else
        {
            if((diff>arr[0])&&(diff<arr[n-1]))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
