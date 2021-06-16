#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll x, n, m;
        cin >> x >> n >> m;
        while(x>20 && n>0)
        {
            x = x/2 + 10;
            n--;
            //cout << "n left : " << n << endl;
            //cout << "x : " << x << endl;
        }
        //cout << "after nth loop " << x << endl;
        while(x>0 && m>0)
        {
            x=x-10;
            m--;
        }
        if(x<=0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
