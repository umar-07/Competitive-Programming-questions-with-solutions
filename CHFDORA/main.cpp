#include <iostream>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll int n, m;
        cin >> n >> m;
        ll int arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> arr[i][j];
            }
        }
        ll int sum= (m*n);
        for(int i=1; i<n-1; i++)
        {
            for(int j=1; j<m-1; j++)
            {
                int k=1;
                while(1)
                {
                    if((j+k > m-1)||(j-k < 0)||(i+k > n-1)||(i-k < 0))
                    {
                        break;
                    }
                    if((arr[i][j+k]==arr[i][j-k])&&(arr[j][i+k]==arr[j][i-k]))
                    {
                        sum+=1;
                        k++;
                        continue;
                    }
                    else
                        break;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
