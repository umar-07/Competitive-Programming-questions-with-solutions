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
        int arr[n][2];
        for(int i=0; i<n; i++)
            cin >> arr[i][0] >> arr[i][1];
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            v[arr[i][0]]+=1;
        }
    }
    return 0;
}
