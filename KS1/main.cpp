#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, counti=0;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                int x1=0, x2=0;
                for(int l=j-1; l>=i; l--)
                {
                    x1=x1^arr[l];
                }
                //cout << x1 << endl;
                for(int k=j; k<n; k++)
                {
                    x2=x2^arr[k];
                  //  cout << x2 << endl;
                    if(x1==x2)
                        {
                            counti++;
                            cout << x1 << " " << x2 << endl;
                            cout << i << " " << j << " " << k << endl;
                        }
                }
            }
        }
        cout << counti << endl;
    }
    return 0;
}
