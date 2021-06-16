#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, b;
        cin >> n >> b;
        long long int w[n], h[n], a[n];
        int p[n];
        for(int i=0; i<n; i++)
        {
            cin >> w[i] >> h[i] >> p[i];
            a[i]=w[i]*h[i];
        }
        int count=0, max=0;
        for(int i=0; i<n; i++)
        {
            if(b<p[i])
            {
                continue;
            }
            else
            {
                if(count==0)
                {
                    max=a[i];
                    count++;
                }
                else
                {
                    if(a[i]>max)
                    {
                        max=a[i];
                    }
                }
            }
        }
        if(count==0)
            cout << "no tablet" << endl;
        else
            cout << max << endl;
    }
    return 0;
}
