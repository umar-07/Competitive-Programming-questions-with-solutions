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
        ll sum=0;
        ll a = n;
        int i=0;
        while(a>6)
        {
            i++;
            ll h = (-1+(sqrt(1+(24*a))))/6;
            ll ctr = ((3*h*h)+h)/2;
            sum+=1;
            a-= ctr;
            //debug(h) debug(ctr) debug(sum) debug(a)
            //cout << endl;
        }
        //debug(i);
        sum+= (a/2);
        cout << sum << endl;
    }
	return 0;
}
