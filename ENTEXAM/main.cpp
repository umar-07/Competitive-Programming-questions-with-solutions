#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, e, m;
        cin >> n >> k >> e >> m;
        int arr[n][e];
        int sum[n]={0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<e; j++)
            {
                if((i==n-1)&&(j==e-1))
                {
                    arr[i][j]=0;
                    continue;
                }
                cin >> arr[i][j];
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<e; j++)
            {
                sum[i]+=arr[i][j];
            }
        }
        int sum1[n-1]={0};
        for(int i=0; i<n-1; i++)
        {
            sum1[i]=sum[i];
        }
        sort(sum1, sum1+(n-1));
        if(sum1[n-(k+1)]<sum[n-1])
            cout << "0" << endl;
        else{
        int need = sum1[n-(k+1)]-sum[n-1]+1;
        if(need<=m)
            cout << need << endl;
        else
            cout << "Impossible" << endl;
        }
    }
    return 0;
}
