#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int res=0;
        long long int m = 1000000007;
        long long int x=max(a,c);
        long long int y=min(a,c);
        for(long long int i=1; i<=b; i++)
        {
            long long int bs = i*i;
            for(long long int j=bs+2; j<=x; j++)
            {
                res=((res%m)+((y-1)%m))%m;
            }
        }
        //cout << "1: "<< res << endl;
        for(long long int i=1; i<=b; i++)
        {
            long long int bs=i*i;
            for(long long int j=1; j<=bs+1; j++)
            {
                if(j>x)
                    break;
                for(long long int k=1; k<=y; k++)
                {
                    if((bs-((j-1)*(k-1)))<0)
                    {
                        res=((res%m)+((y-k+1)%m))%m;
                        break;
                    }
                }
            }
        }
        /*for(long long int i=1; i<=b; i++)
        {
            long long int bs=i*i;
            for(long long int j=bs+1; j>=1; j--)
            {
                if(j>x)
                    continue;
                for(long long int k=1; k<=y; k++)
                {
                    if((bs-((j-1)*(k-1)))<0)
                        {
                            res=((res%m)+1)%m;
                    //        cout << "b, c, a: " << bs << " " << j << " " << k << endl;
                        }

                }
            }
        }*/
        cout << res << endl;
    }
    return 0;
}
