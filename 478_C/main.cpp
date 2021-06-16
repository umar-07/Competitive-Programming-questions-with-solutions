#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ll r, g, b;
    cin >> r >> g >> b;
    vector <ll> v;
    v.push_back(r);
    v.push_back(g);
    v.push_back(b);
    sort(v.begin(), v.end());
    ll c = v[0]+v[1]+v[2];
    c/=3;
    ll k = v[0]+v[1];
    if(v[2]>2*(v[1]+v[0]))
        cout << v[1] + v[0] << endl;
    else
        cout << c << endl;
    return 0;
}
