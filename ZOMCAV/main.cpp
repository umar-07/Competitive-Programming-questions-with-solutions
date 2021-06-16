#include <bits/stdc++.h>

using namespace std;

void add(long long int arr[], int N, int lo, int hi, int val)
{
    arr[lo] += val;
    if (hi != N - 1)
       arr[hi + 1] -= val;
}



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int arr[n+1], c[n+1]={0}, h[n+1]={0};
        for(int i=1; i<n+1; i++)
            {
                cin >> arr[i];
                int j=i-arr[i], k=i+arr[i];
                add(c, n+1, j, k, 1);
            }
        updateArray(c, n+1);
        for(int i=1; i<n+1; i++)
            cin >> h[i];
        c[0]=0;
        sort(c, c+(n+1));
        sort(h, h+(n+1));
        int flag=1;
        for(int i=1; i<n+1; i++)
        {
            if(h[i]!=c[i])
            {
                flag=0;
                break;
            }
        }
        if(flag==0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
