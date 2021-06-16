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
        int a[n], b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        int x=n+1, y=n+1;
        int f1=0, f2=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==1 && f1==0)
            {
                x=i;
                f1=1;
            }
            if(a[i]==-1 && f2==0)
            {
                y=i;
                f2=1;
            }
        }
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==b[i])
                continue;
            else if(a[i]>b[i])
            {
                if(y>=i)
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                if(x>=i)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
