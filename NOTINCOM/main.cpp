#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k, p, counti=0;
        cin >> n >> m;
        int j=1;
        int arr[1000000];
        for(int i=0; i<1000000; i++)
        {
            arr[i]=j;
            j++;
        }
        int a[n], b[m];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            k=a[i];
            arr[k-1]=0;
        }
        for(int i=0; i<m; i++)
            {
                cin >> b[i];
                p=b[i];
                if(arr[p-1]==0)
                {
                    counti++;
                }
            }
        cout << counti << endl;
    }
    return 0;
}
