#include <bits/stdc++.h>

using namespace std;

void add(long long int arr[], long long int N, long long int lo, long long int hi, long long int val)
{
    arr[lo] += val;
    if (hi != N - 1)
       arr[hi + 1] -= val;
}

void updateArray(long long int arr[], long long int N)
{
    //  convert array into prefix sum array
    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n+1], c[n+1]={0}, h[n+1]={0};
        for(int i=1; i<n+1; i++)
            {
                cin >> arr[i];
                int j=i-arr[i], k=i+arr[i];
                if(j<=0)
                    j=1;
                if(k>n)
                    k=n;
                add(c, n+1, j, k, 1);
            }
        updateArray(c, n+1);
        for(int i=1; i<n+1; i++)
            cin >> h[i];
        /*for(int i=1; i<n+1; i++)
            cout << c[i] << " " ;
        cout << endl;*/
        c[0]=0;
        sort(c, c+(n+1));
        sort(h, h+(n+1));
        /*for(int i=1; i<n+1; i++)
            cout << c[i] << " " ;
        cout << endl;
        for(int i=1; i<n+1; i++)
            cout << h[i] << " ";
        cout << endl;*/
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
