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
        int arr[n][2];
        for(int i=0; i<n; i++)
            cin >> arr[i][0] >> arr[i][1];
        if(n==1)
            cout << "1" << endl;
        else
        {
            int a=1, b=2;
            int x = a ^ b;
            for(int i=3; i<=n; i++)
            {
                x= x ^ i;
             //   cout << "x: " << x << endl;
            }
            cout << x << endl;
        }
    }
    return 0;
}
