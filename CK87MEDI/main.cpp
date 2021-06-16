#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n+k]={0};
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int l=*max_element(arr, arr+(n+k));
        for(int i=n; i<(n+k); i++)
            arr[i]=l+1;
        sort(arr, arr+(n+k));
        int m=((n+k)/2);
        cout << arr[m] << endl;
    }
    return 0;
}
