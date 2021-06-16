#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll c = min(n, m)+1;
    cout << c << endl;
    ll x=0, y=m;
    while(x<=n && y>=0)
    {
        cout << x << " " << y << endl;
        x++;
        y--;
    }
    return 0;
}
