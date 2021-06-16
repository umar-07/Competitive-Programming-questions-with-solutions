#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int mini=arr[0];
        long long int sum=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<mini)
                mini=arr[i];
            sum+=mini;
        }
        cout << sum << endl;
    }
    return 0;
}
