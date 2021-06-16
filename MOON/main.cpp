#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        int flag=0;
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                if(((i*x)+(j*y))==((((n-i)*x)+((m-j)*y))))
                {
                    //cout << "i: " << i << " j: " << j << endl;
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
