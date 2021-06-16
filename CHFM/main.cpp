#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long double c[n];
        for(int i=0; i<n; i++)
            cin >> c[i];
        long double sum=0;
        int flag=0;
        long double mean;
        double m=n;
        for(int i=0; i<n; i++)
            sum=sum+c[i];
        mean=sum/m;
        long double mini=std::numeric_limits<double>::infinity();
        for(int i=0; i<n; i++)
        {
            long double newmean;
            newmean=(sum-c[i])/(m-1);
            if(newmean==mean)
            {
                if(mini>i+1)
                {
                    flag=1;
                    mini=i+1;
                }
            }
        }
        if(flag==1)
            cout << mini << endl;
        else
            cout << "Impossible" << endl;
    }
    return 0;
}
