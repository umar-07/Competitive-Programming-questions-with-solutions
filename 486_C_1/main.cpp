#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll n, p;
    cin >> n >> p;
    string s;
    cin >> s;
    if(p>n/2)
    {
        reverse(s.begin(), s.end());
        p=n-p+1;
    }
    p--;
    ll c=0;

	return 0;
}
