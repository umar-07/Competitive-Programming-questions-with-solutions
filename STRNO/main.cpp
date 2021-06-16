#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll x, k;
        cin >> x >> k;
        vector <ll> v;
        ll n=x;
        while (n%2 == 0)
        {
            v.push_back(2);
            n /= 2;
        }
        for (int i=3; i*i<=n; i=i+2)
        {
            while (n%i == 0)
            {
                n = n/i;
                v.push_back(i);
            }
        }
        if (n > 2)
            v.push_back(n);
        if(v.size()<k)
            cout << "0" << endl;
        else
            cout << "1" << endl;
    }
    return 0;
}
