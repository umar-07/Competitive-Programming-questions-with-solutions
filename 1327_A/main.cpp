#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll m = k*k;
        if(k==1)
        {
            if(n%2==0)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
        else if(n<m)
            cout << "NO" << endl;
        else
        {
            if(k%2==0 && n%2==0)
                cout << "YES" << endl;
            else if(k%2!=0 && n%2!=0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
