#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


int main()
{
    int n=10000000;
    vector <bool> prime;
    for(int i=0; i<n+1; i++)
    {
        prime.push_back(true);
    }

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    prime[0]=false;
    prime[1]=false;
    vector <ll> c;
    c.push_back(0);
    for(int i=1; i<n+1; i++)
    {
        ll curr;
        if(prime[i]==true)
            curr=1;
        else
            curr=0;
        ll c_new=c[i-1]+curr;
        c.push_back(c_new);
    }
    ll t;
    cin >> t;
    while(t--)
    {

        ll n;
        cin >> n;
        if(n==2)
        {
            cout << 1 << endl;
            continue;
        }
        ll m=n/2;
        ll res = c[n]-c[m]+1;
        cout << res << endl;
    }
	return 0;
}
