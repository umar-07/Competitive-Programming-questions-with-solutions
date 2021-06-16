#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k, i;
        cin >> n;
        cin.sync();
        for(i=n+1; ; i++)
        {
            int counti=0;
            long long int m=i;
            while(m>0)
            {
                long long int rem=m%10;
                if(rem==3)
                    counti++;
                m=m/10;
                if(counti==3)
                {
                    k=i;
                    break;
                }
            }
            if(counti==3)
                break;
        }
        cout << k << endl;
    }
    return 0;
}
