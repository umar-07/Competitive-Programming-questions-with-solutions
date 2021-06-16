#include <bits/stdc++.h>

using namespace std;

#define ll long long int

const ll MOD = 1e9 + 7;

ll power(ll k, ll n)
{
    ll res = 1;
    while (n) {
        if (n & 1)
            res = res * k % MOD;
        n = n / 2;
        k = k * k % MOD;
    }
    return res;
}


ll poke(string saa, string sbb)
{
    ll a = 0, b = 0;
    for (int i = 0; i < saa.length(); i++)
        a = (a * 10 + (saa[i] - '0')) % MOD;
    for (int i = 0; i < sbb.length(); i++)
        b = (b * 10 + (sbb[i] - '0')) % (MOD - 1);
    return power(a, b);
}



long long moduloMultiplication(long long a,
                            long long b,
                            long long mod)
{
    long long res = 0; // Initialize result

    // Update a if it is more than
    // or equal to mod
    a %= mod;

    while (b)
    {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % mod;

        // Here we assume that doing 2*a
        // doesn't cause overflow
        a = (2 * a) % mod;

        b >>= 1; // b = b / 2
    }

    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {string n, k;
    cin >> n >> k;
    stringstream geek1(n);
    stringstream geek2(k);
    int u = 0;
    geek1 >> u;
    int v = 0;
    geek2 >> v;
    int m= 1000000007;
    long long int ppp=poke("2",k);
    ppp--;
    //cout << ppp << endl;
    //cout << ppp << endl;
    int x, y;
    x=max(v, (u-v));
    y=min(v, (u-v));
    long long int per[y];
    long long int maaxi=u;
    for(int i=0; i<y; i++)
    {
        per[i]=maaxi;
        maaxi--;
    }
     //for(int i=0; i<y; i++)
      //   cout << per[i] << " ";
     //cout << endl;
        long long int notdiv=1;
        long long int div=y;
        while(div!=0)
        {
        for(int i=0; i<y; i++)
        {
            if(per[i]%div==0)
            {
                per[i]=per[i]/div;
                break;
            }
            if(i==y-1)
            {
                notdiv=((notdiv%m)*(div%m))%m;
            }
        }
        div--;
        }
      //  cout << endl;
     //for(int i=0; i<y; i++)
      //   cout << per[i] << " ";
     //cout << endl;
     //cout << notdiv << endl;
    long long int multi=1;
    /*for(int i=0; i<y; i++)
    {
        multi=((multi)*(per[i]));
    }*/
    //cout << (multi/notdiv)%m << endl;
    //multi=1;
    /*for(int i=0; i<y; i++)
    {
        multi=((multi%m)*(per[i]%m))%m;
    }*/
    /*for(int i=0; i<y; i++)
        per[i]=per[i]%m;*/
      //  cout << "end" << endl;
    for(int i=0; i<y; i++)
    {
        if(notdiv==1)
            break;
        else
        {
            if(__gcd(notdiv,per[i])==1)
                continue;
            else
            {
                int k = __gcd(notdiv,per[i]);
                notdiv=notdiv/k;
                per[i]=per[i]/k;
            }
        }
    }
    for(int i=0; i<y; i++)
        {
            multi=moduloMultiplication(multi,per[i],m);
            //cout << multi << " ";
        }
    //cout << "multi"  << multi << endl;
    //cout << endl << endl << endl;
    //cout << multi << endl;
    //cout << multi << endl;
    long long int resultt=moduloMultiplication(multi,ppp,m);
    //cout << "bf:" << resultt << endl;
    resultt++;
    resultt=resultt%m;
    cout << resultt << endl;
    }
    return 0;
}
