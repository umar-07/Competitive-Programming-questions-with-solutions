#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
    ll n;
    cin >> n;
    if(n<=4)
    {
        if(n==1)
            cout << 20 << endl;
        else if(n==2)
            cout << 36 << endl;
        else if(n==3)
            cout << 51 << endl;
        else
            cout << 60 << endl;
    }
    else
    {
        ll f = n/4;
        f=f*4;
        ll rem = n%4;
        ll res=0;
        res = 11*f;
        if(n%4==0)
            res+=16;
        else if(n%4==1)
            res+=32;
        else if(n%4==2)
            res+=44;
        else
            res+=55;
        cout << res << endl;
    }
    }
	return 0;
}
