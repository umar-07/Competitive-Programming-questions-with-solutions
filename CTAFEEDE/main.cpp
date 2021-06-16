#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        int arr[m];
        int c[n+1]={0};
        for(int i=0; i<m; i++)
            cin >> arr[i];
        int flag=0;
        for(int i=0; i<m; i++)
        {
            if((i+1)%n==0)
            {
                for(int i=0; i<n+1; i++)
                    c[i]=0;
            }

            {
                if(c[arr[i]]==0)
                    c[arr[i]]=1;
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
