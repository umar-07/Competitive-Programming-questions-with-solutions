#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll int n;
        cin >> n;
        ll int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll int maxi=n;
        for(int i=0; i<n; i++)
        {
            ll int sum=arr[i];
            ll int multi=arr[i];
            for(int j=i+1; j<n; j++)
            {
                sum+=arr[j];
                multi*=arr[j];
                if(sum==multi)
                    maxi++;
            }
        }
        cout << maxi << endl;
    }
    return 0;
}
