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
        int p[n], c[n];
        for(int i=0; i<n; i++)
            cin >> p[i] >> c[i];
        int flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(p[i]<c[i])
            {
                flag=1;
                break;
            }
            if(p[i]>p[i+1] || c[i]>c[i+1])
            {
                flag=1;
                break;
            }
            if(p[i]==p[i+1] && c[i]<c[i+1])
            {
                flag=1;
                break;
            }
            if(p[i]<p[i+1] || c[i]<c[i+1])
            {
                int k = p[i+1]-p[i];
                int l = c[i+1]-c[i];
                if(l>k)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(p[n-1]<c[n-1])
            flag=1;
        if(flag==1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
