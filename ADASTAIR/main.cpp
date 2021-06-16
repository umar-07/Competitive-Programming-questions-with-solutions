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
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int steps=0;
        if(arr[0]>k)
        {
            steps= steps + ceil((float)arr[0]/k)-1;
        }
        for(int i=0; i<n-1; i++)
        {
            if(arr[i+1]-arr[i] > k)
            {
                steps+= ceil((float)(arr[i+1]-arr[i])/k)-1;
            }
        }
        cout << steps << endl;
    }
    return 0;
}
