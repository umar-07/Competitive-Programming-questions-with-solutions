#include <bits/stdc++.h>

using namespace std;

int binarySearch(long long int arr[], int l, int r, long long int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag=-1;
        long long int k;
        cin >> n >> k;
        long long int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        for(int i=0; i<n; i++)
        {
            long long int s=k-a[i];
            flag=binarySearch(a, 0, n-1, s);
            if(flag==i)
            {
                flag=-1;
                continue;
            }
            else if(flag!=i && flag!=-1)
                break;
        }
        if(flag>=0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
