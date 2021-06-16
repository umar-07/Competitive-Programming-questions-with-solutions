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
        double arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        int sum=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                double a, b, c, d;
                a= arr[i]/2;
                b= arr[j]/2;
                c= arr[i];
                d= arr[j];
                if((c>=b)&&(d>=a))
                    {
                       // cout << c << " " << d << endl;
                        sum++;
                    }
                else
                    break;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
