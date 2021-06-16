#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, n, c, d, x, y;
        cin >> a >> b >> n;
        if(n%2!=0)
        {
            c=a*(pow(2,(n+1)/2));
            d=b*(pow(2,(n-1)/2));
        }
        else
        {
            c=a*(pow(2,n/2));
            d=b*(pow(2,n/2));
        }
        x=max(c,d);
        y=min(c,d);
        long long int id;
        id=x/y;
        cout << id << endl;
    }
    return 0;
}
