#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x[n]={0}, y[n]={0};
        char arr[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> arr[i][j];
                if(j<n/2)
                {
                    if(arr[i][j]=='1')
                        x[i]++;
                }
                if(j>=n/2)
                {
                    if(arr[i][j]=='1')
                        y[i]++;
                }
            }
        }
        /*for(int i=0; i<n; i++)
        {
            cout << x[i] << " " << y[i] << endl;
        }*/
        int prevx=0;
        int prevy=0;
        for(int i=0; i<n; i++)
        {
            prevx+=x[i];
            prevy+=y[i];
        }
        int maxi=max(prevx, prevy);
        int mini=min(prevx, prevy);
        if(maxi-mini>1)
        {
            maxi--;
            mini++;
        }
        cout << maxi-mini << endl;
    }
    return 0;
}
