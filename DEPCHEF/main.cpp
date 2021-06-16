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
        int a[n];
        int d[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> d[i];
        int maxi=-1;
        for(int i=0; i<n; i++)
        {
            if(i==0)
            {
                if(d[0]>(a[1]+a[n-1]))
                {
                    if(d[0]>maxi)
                        maxi=d[0];
                }
            }
            else if(i==n-1)
            {
                if(d[n-1]>(a[0]+a[n-2]))
                {
                    if(d[n-1]>maxi)
                        maxi=d[n-1];
                }
            }
            else
            {
                if(d[i]>(a[i-1]+a[i+1]))
                {
                    if(d[i]>maxi)
                        maxi=d[i];
                }
            }
        }
        cout << maxi << endl;
    }
    return 0;
}
