#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int found=0;
        int n, m;
        cin >> n >> m;
        int arr[m];
        int c[n]={0};
        for(int i=0; i<m; i++)
            cin >> arr[i];
        for(int i=0; i<m; i++)
        {
            c[arr[i]]++;
            if((i-1)%n==0)
            {
                int j=n;
                while(n--)
                {
                    if(c[j]>1)
                    {
                        found=1;
                        break;
                    }
                }
            }
            if(found==1)
                break;
            if(i-1%n==0)
            {
                c[n]={0};
                continue;
            }
        }
        if(found==1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
