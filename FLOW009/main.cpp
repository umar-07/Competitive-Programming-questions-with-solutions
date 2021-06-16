#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double q, p, ans;
        cin >> q >> p;
        if(q>1000)
        {
            ans=(q*p)-((q*p)*0.1);
        }
        else
            ans=q*p;
        cout.precision(6);
        cout << fixed << ans << endl;
    }
    return 0;
}
