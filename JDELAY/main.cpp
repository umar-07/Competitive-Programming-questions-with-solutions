#include <iostream>

using namespace std;

int main()
{
    int t, k;
    cin >> t;
    for(k=0; k<t; k++)
    {
        int n, count=0;
        cin >> n;
        int arr[n][2];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
            if(arr[i][1]-arr[i][0]>5)
            {
                count++;
            }
        }
        cout << count <<endl;

    }
    return 0;
}
