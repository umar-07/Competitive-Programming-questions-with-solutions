#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m , k , l , r;
        cin >> n >> m >> k >> l >> r;
        int c[n], p[n];
        for(int i=0; i<n; i++)
            cin >> c[i] >> p[i];
        int cost=INT_MAX;
        for(int i=0; i<n; i++)
        {
            int ct;
            if(c[i]<k)
            {
                if((c[i]+m)>=k)
                {
                   ct=k;
                }
                else
                    ct=c[i]+m;
                if((ct>=l)&&(ct<=r))
                {
                    if(p[i]<cost)
                        cost=p[i];
                }
            }
            else if(c[i]>k)
            {
                if((c[i]-m)<=k)
                {
                    ct=k;
                }
                else
                    ct=c[i]-m;
                if((ct>=l)&&(ct<=r))
                {
                    if(p[i]<cost)
                        cost=p[i];
                }
            }
            else
            {
                ct=k;
                if((ct>=l)&&(ct<=r))
                {
                    if(p[i]<cost)
                        cost=p[i];
                }
            }
        }
        if(cost==INT_MAX)
            cout << "-1" << endl;
        else
            cout << cost << endl;
    }
    return 0;
}
