#include <iostream>

using namespace std;

int main()
{
    int t, k;
    cin >> t;
    for(k=0; k<t; k++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int a[m];
        int b[k];
        for(int l=0; l<m; l++)
            cin >> a[l];
        for(int l=0; l<k; l++)
            cin >> b[l];
        int count=0;
        for(int i=1; i<=n; i++)
        {
            int store=0;
            for(int j=0; j<m; j++)
            {
                if(i==a[j])
                {
                    store=1;
                    break;
                }
            }
            for(int j=0; j<k; j++)
            {
                if(i==b[j])
                {
                    store=1;
                    break;
                }
            }
            if(store==0)
            {
                count++;
            }
        }
        int count1=0;
        for(int i=0; i<m; i++)
        {
            int same=0;
            for(int j=0; j<k; j++)
            {
                if(b[j]==a[i])
                {
                    same=1;
                    break;
                }
            }
            if(same==1)
            {
                count1++;
            }
        }
        cout << count1 << " " << count << endl;
    }
    return 0;
}
