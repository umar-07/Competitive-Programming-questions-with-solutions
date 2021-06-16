#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k, i, z=0, o=0;
        cin >> n >>k;
        long long int a[n]={0};
        k=k%n;
        for(i=0; i<n; i++)
        {
            if(k!=0)
            {
                a[i]++;
                k--;
            }
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
                z++;
            else
                o++;
        }
        if(n==2)
        {
            if(z==1)
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else
        {
            if(z==0)
                cout << "0" << endl;
            else if((z==1)||(o==1))
                cout << "2" << endl;
            else
            {
                if(n%2!=0)
                {
                    if(z<=o)
                        cout << z*2 << endl;
                    else
                        cout << o*2 << endl;
                }
                else
                {
                    if(z==o)
                        cout << n-1 << endl;
                    else
                        cout << (min(z, o)*2) << endl;
                }
            }
        }
    }
    return 0;
}
