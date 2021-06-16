#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll k;
    cin >> k;
    vector <ll> v;
    for(int i=1; i<=10; i++)
        v.push_back(1);
    ll sum=1;
    while(sum<k)
    {
        sum= sum/v[0];
        v[0]+=1;
        sum = sum*v[0];
        sort(v.begin(), v.end());
    }
    string s;
    string str = "codeforces";
    sort(v.begin(), v.end());
    for(int i=v.size()-1; i>=0; i--)
    {
        ll k = v[i];
        for(int j=0; j<k; j++)
        {
            s.push_back(str[i]);
        }
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
	return 0;
}
