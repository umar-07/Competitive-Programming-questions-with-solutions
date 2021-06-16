#include <iostream>

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
        int max=0;
        for(int i=0; i<n; i++)
        {
            int sum=0;
            for(int j=i; j<i+k; j++)
            {
                if(j==n)
                    break;
                sum=sum+arr[j];
            }
            if(sum > max)
                max=sum;
        }
        cout << max << endl;
    }
    return 0;
}
