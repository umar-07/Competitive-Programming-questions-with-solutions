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
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double res = a*b*c*d;
    res = (100*1.0)/res;
    printf("%0.2f", res);
	return 0;
}
