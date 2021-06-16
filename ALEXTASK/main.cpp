#include <bits/stdc++.h>
#include <boost/math/common_factor.hpp>
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
        sort(arr, arr+n);
        long long int d=arr[0]*arr[1];
        long long int l=LONG_LONG_MAX;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                long long int k = boost::math::lcm(arr[i], arr[j]);
                if(k<l)
                    l=k;
            }
        }
        long long int res = min(l,d);
        cout << res << endl;
    }
    return 0;
}
