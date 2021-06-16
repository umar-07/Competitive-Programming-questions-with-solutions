#include <iostream>

using namespace std;

int main()
{
    int t, j;
    cin >> t;
    for(j=0; j<t; j++)
    {
        int n, i;
        cin >> n;
        string f[n];
        string l[n];
        for(i=0; i<n; i++)
        {
            cin >> f[i] >> l[i];
        }
        int k;
        for(k=0; k<n; k++)
        {
            int count=0;
            for(i=0; i<n; i++)
            {
                if(k==i)
                    continue;
                else
                {
                    if(f[k]==f[i])
                    {
                        count=1;
                    }
                }
            }
            if(count==0)
                cout << f[k] << endl;
            else
                cout << f[k] << " " << l[k] << endl;
        }
    }
    return 0;
}
