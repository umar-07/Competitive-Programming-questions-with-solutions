#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m , k;
    cin >> n >> m >> k;
    ll vis[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            vis[i][j]=0;
    }
    ll c=0;
    vector <pair<int, int> > v;
    vector <int> f;
    if(m%2==0)
    {
        for(int i=0; i<n; i++)
        {
            if(c==k-1)
                break;
            if(i%2==0)
            {
                for(int j=0; j<m; j++)
                {
                    if(c==k-1)
                        break;
                    v.push_back({i, j});
                }
            }
            else
            {
                for(int j=m-1; j>=0; j++)
                {
                    if(c==k-1)
                        break;
                    v.push_back({i,j})
                }
            }
        }
    }
    return 0;
}
