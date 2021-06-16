#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int b[n]={0};
        int s[n];
        for(int i=0; i<n; i++)
        {
            s[i]=arr[i];
        }
        sort(s, s+n);
        int maxi=n-1;
        while(maxi>-1)
        {


        }
    }
    return 0;
}
