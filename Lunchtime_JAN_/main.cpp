#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll int n, a, b, c;
        cin >> n >> a >> b >> c;
        ll int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll int s1[n], s2[n];
        for(int i=0; i<n; i++)
        {
            s1[i]=abs(arr[i]-b);
            s2[i]=abs(arr[i]-a);
        }
        ll int sum=INT_MAX;
        for(int i=0; i<n; i++)
        {
            int res = s1[i]+s2[i];
            if(res<sum)
                sum=res;
        }
        ll int y = sum+c;
        cout << y << endl;
    }
    return 0;
}
