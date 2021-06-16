#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, m , k;
        cin >> n >> m >> k;
        long long int um=m*n;
        if(((__gcd(n,k)!=1)||(__gcd(m,k)!=1)))
            cout << "-1" << endl;
        else
            cout << um << endl;
    }
    return 0;
}
