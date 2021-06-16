#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a,b;
        cin >> a >> b;
        ll rem = a%b;
        if(a==b)
            cout << "0" << endl;
        else if(a<b)
        {
            cout << abs(a-b) << endl;
        }
        else
        {
            if(rem==0)
                cout << "0" << endl;
            else
                cout << b-rem << endl;
        }
    }
    return 0;
}
