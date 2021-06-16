#include <iostream>

using namespace std;

int main()
{
    int t, k;
    cin >> t;
    for(k=0; k<t; k++)
    {
        int n, k;
        cin >> n >> k;
        int arr[n][2];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i][0] >> arr[i][1];
        }
        int j=0;
        while(k!=0)
        {
            if(k>arr[j][0])
            {
                k=k-arr[j][0];
                arr[j][0]=0;
            }
            else
            {
                arr[j][0]=arr[j][0]-k;
                k=0;
                break;
            }
            j++;
        }
        int money=0;
        for(int i=0; i<n; i++)
        {
            money=money+arr[i][0]*arr[i][1];
        }
        cout << money << endl;
    }
    return 0;
}
