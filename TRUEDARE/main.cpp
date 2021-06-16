#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int u, v, x, y;
        cin >> u;
        int a[u];
        for(int i=0; i<u; i++)
            cin >> a[i];
        cin >> v;
        int b[v];
        for(int i=0; i<v; i++)
            cin >> b[i];
        cin >> x;
        int c[x];
        for(int i=0; i<x; i++)
            cin >> c[i];
        cin >> y;
        int d[y];
        for(int i=0; i<y; i++)
            cin >> d[i];
        int hasht[101]={0};
        int hashd[101]={0};
        for(int i=0; i<u; i++)
            hasht[a[i]]=1;
        for(int i=0; i<v; i++)
            hashd[b[i]]=1;
        int flag=0;
        for(int i=0; i<x; i++)
        {
            if(hasht[c[i]]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            for(int i=0; i<y; i++)
            {
                if(hashd[d[i]]==0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
