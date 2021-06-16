#include <bits/stdc++.h>
#include<iomanip>
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
        sort(arr, arr+n);
        for(int i=0; i<k; i++)
            arr[i]=0;
        for(int i=n-1; i>=(n-k); i--)
            arr[i]=0;
        long double sum=0;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
        }
        long double avg;
        avg=sum/(n-(2*k));
        std::cout << std::fixed;
        std::cout << std::setprecision(6);
        cout << avg << endl;
    }
    return 0;
}
