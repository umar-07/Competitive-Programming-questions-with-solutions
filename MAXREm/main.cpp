#include <bits/stdc++.h>

using namespace std;

int main()
{
    //int t;
    //cin >> t;
    //while(t--)
    //{
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        int div=0;
        for(int i=n-2; i>=0; i--)
        {
            if(arr[n-1]==arr[i])
                continue;
            else
            {
                div=arr[i]%arr[n-1];
                break;
            }
        }
        cout << div << endl;
    //}
    return 0;
}
