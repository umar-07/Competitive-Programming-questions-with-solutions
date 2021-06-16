#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n][k];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
                cin >> arr[i][j];
        }
        int res[n]={0};
        int h[n][m];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                h[i][j]=0;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<k; j++)
            {
                h[i][arr[i][j]-1]++;
            }
        }
        int maxi[n]={0};
        for(int i=0; i<n; i++)
        {
            int maxi2=h[i][0];
            int p=1;
            for(int j=0; j<m; j++)
            {
                if(maxi2<h[i][j])
                {
                    maxi2=h[i][j];
                    p=j+1;
                }
            }
            maxi[i]=p;
        }
        /*cout << "MAXI" << endl;
        for(int i=0; i<n; i++)
        cout << maxi[i] << " ";
        cout << endl;*/
        for(int i=0; i<n; i++)
        {
            int p = arr[i][0];
            int flag=0;
            for(int j=1; j<k; j++)
            {
                if(p!=arr[i][j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                res[i]=maxi[i];
            else
                res[i]=p;
        }
        for(int i=0; i<n; i++)
            cout << res[i] << " ";
        cout << endl;
    }
    return 0;
}
