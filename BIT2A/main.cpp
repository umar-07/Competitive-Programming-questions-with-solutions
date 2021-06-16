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
        int b[n];
        for(int i=0; i<n; i++)
        {
            int counti=0;
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]>arr[i])
                    counti++;
            }
            b[i]=counti;
        }
        for(int i=0; i<n; i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}
