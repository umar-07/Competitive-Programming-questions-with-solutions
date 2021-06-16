#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int d[n], v[n];
        for(int i=0; i<n; i++)
        {
            cin >> d[i] >> v[i];
        }
        int fmin, smin=0;
        int fd, sd;
        fmin=v[0];
        fd=d[0];
        for(int i=0; i<n; i++)
        {
            if(v[i]>fmin)
            {
                fmin=v[i];
                fd=d[i];
            }
        }
        for(int i=0; i<n; i++)
        {
            if(d[i]!=fd)
            {
                if(v[i]>smin)
                {
                    smin=v[i];
                    sd=d[i];
                }
            }
        }
        int maxi=fmin+smin;
        cout << maxi << endl;
    }
    return 0;
}
