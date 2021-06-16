#include <iostream>

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
        long long int min=arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i]<min)
            {
                min =arr[i];
            }
        }
        long long unsigned int m = min*(n-1);
        cout << m << endl;
    }
    return 0;
}
