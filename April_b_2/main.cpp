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
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        double f;
        f=a*b*c*d;
        f=(100*1.0)/f;
        f=f*(100*1.0);
        double x = round(f);
        x=x/(100*1.0);
        if(x<9.58)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
