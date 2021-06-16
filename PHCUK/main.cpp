#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long double x, y;
        cin >> x >> y;
        long long int n, m, k;
        cin >> n >> m >> k;
        long double a[n][2], b[m][2], c[k][2];
        for(long long int i=0; i<n; i++)
            cin >> a[i][0] >> a[i][1];
        for(long long int i=0; i<m; i++)
            cin >> b[i][0] >> b[i][1];
        for(long long int i=0; i<k; i++)
            cin >> c[i][0] >> c[i][1];
        long double d1=INT_MAX;
        for(long long int i=0; i<n; i++)
        {
            long double f1 = sqrt(((x-a[i][0])*(x-a[i][0]))+((y-a[i][1])*(y-a[i][1])));
            if(f1>d1)
                continue;
            for(long long int j=0; j<m; j++)
            {
                long double f2 = sqrt(((a[i][0]-b[j][0])*(a[i][0]-b[j][0]))+((a[i][1]-b[j][1])*(a[i][1]-b[j][1])));
                if((f1+f2)>d1)
                    continue;
                for(long long int l=0; l<k; l++)
                {
                    long double f3 = sqrt(((b[j][0]-c[l][0])*(b[j][0]-c[l][0]))+((b[j][1]-c[l][1])*(b[j][1]-c[l][1])));
                    if((f1+f2+f3)<d1)
                        d1=f1+f2+f3;
                }
            }
        }
        long double d2 = INT_MAX;
        for(long long int i=0; i<m; i++)
        {
            long double f1 = sqrt(((x-b[i][0])*(x-b[i][0]))+((y-b[i][1])*(y-b[i][1])));
            if((f1>d2)||(f1>d1))
                continue;
            for(long long int j=0; j<n; j++)
            {
                long double f2 = sqrt(((b[i][0]-a[j][0])*(b[i][0]-a[j][0]))+((b[i][1]-a[j][1])*(b[i][1]-a[j][1])));
                if(((f1+f2)>d2)||((f1+f2)>d1))
                    continue;
                for(long long int l=0; l<k; l++)
                {
                    long double f3 = sqrt(((a[j][0]-c[l][0])*(a[j][0]-c[l][0]))+((a[j][1]-c[l][1])*(a[j][1]-c[l][1])));
                    if((f1+f2+f3)<d2)
                        d2=f1+f2+f3;
                }
            }
        }
        long double d;
        if(d1>d2)
            d=d2;
        else
            d=d1;
        cout.precision(11);
        cout << d << endl;
    }
    return 0;
}
