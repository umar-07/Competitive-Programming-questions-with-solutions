#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n==1 || n==2)
            cout << "0" << endl;
        else
        {
            ll res=n/2;
            if(n%2==0)
                cout << res-1 << endl;
            else
                cout << res << endl;
        }
    }
    return 0;
}
