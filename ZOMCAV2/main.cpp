#include <bits/stdc++.h>

using namespace std;

void add(long long int arr[], int N, int lo, int hi, int val)
{
    arr[lo] += val;
    if (hi != N -1)
       arr[hi + 1] -= val;
}

void updateArray(long long int arr[], int N)
{
    //  convert array into prefix sum array
    for (int i = 1; i < N; i++)
        arr[i] += arr[i - 1];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int arr[n], c[n+1]={0}, h[n]={0};
        for(int i=0; i<n; i++)
            {
                cin >> arr[i];
                int j=(i+1)-arr[i], k=(i+1)+arr[i];
                //cout << j << " " << k << endl;
                add(c, n+1, j, k, 1);
                for(int i=0; i<n; i++)
                    cout << c[i] << " ";
                cout << endl;
            }

        for(int i=0; i<n; i++)
            cout << c[i] << " ";
        cout << endl;
        updateArray(c,n+1);

        for(int i=0; i<n; i++)
            cout << c[i] << " ";
        cout << endl;
        for(int i=0; i<n; i++)
            cin >> h[i];
        //c[0]=0;
        sort(c, c+n);
        sort(h, h+n);
        int flag=1;
        for(int i=0; i<n; i++)
        {
            if(h[i]!=c[i])
            {
                flag=0;
                break;
            }
        }

        for(int i=0; i<n; i++)
            cout << c[i] << " ";
        cout << endl;
        for(int i=0; i<n; i++)
            cout << h[i] << " ";
        cout << endl;
        if(flag==0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
