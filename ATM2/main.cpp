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
        int b[n];
        for(int i=0; i<n; i++)
        {
            if(k>=arr[i])
            {
                k=k-arr[i];
                b[i]=1;
            }
            else
            {
                b[i]=0;
            }
        }
        for(int i=0; i<n; i++)
            cout << b[i];
        cout << endl;
    }
    return 0;
}
