#include <bits/stdc++.h>
#define ll long long


using namespace std;


ll int power(ll int x, ll int y, ll int p)
{
    ll int res = 1;      // Initialize result

    x = x % p;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;
}

// Returns n^(-1) mod p
ll int modInverse(ll int n, ll int p)
{
    return power(n, p-2, p);
}

// Returns nCr % p using Fermat's little
// theorem.
ll int nCrModPFermat(ll int n, ll int r, ll int p)
{
   // Base case
   if (r==0)
      return 1;

    // Fill factorial array so that we
    // can find all factorial of r, n
    // and n-r
    ll int fac[n+1];
    fac[0] = 1;
    for (ll int i=1 ; i<=n; i++)
        fac[i] = fac[i-1]*i%p;

    return (fac[n]* modInverse(fac[r], p) % p *
            modInverse(fac[n-r], p) % p) % p;
}






int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll int m = 1000000007;
        ll int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll int z1=0, o1=0, z2=0, o2=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='1')
                o1++;
            else
                z1++;
            if(b[i]=='1')
                o2++;
            else
                z2++;
        }
        ll int res=0;
        if(((o1==0)&&(o2==0))||((z1==0)&&(z2==0))||((z1==0)&&(o2==0))||((o1==0)&&(z2==0)))
            cout << "1" << endl;
        else
        {
            ll int total_one = o1+o2;
            ll int total_zero = z1+z2;
            ll int diff;
            if(o1>=o2)
                diff=o1-o2;
            else
                diff=o2-o1;
            ll int i = diff;
            while(1)
            {
                if((i>total_one)||(i>total_zero)||(i>n))
                    break;
                res= (res + nCrModPFermat(n, i, m)) % m;
                i=i+2;
            }
            cout << res << endl;
        }
    }
    return 0;
}
