#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int res = __builtin_popcount(n);
        cout << res << endl;
    }
    return 0;
}
