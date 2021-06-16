#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

// Finds nth fibonacci number
ll fib(ll f[], ll n)
{
    // 0th and 1st number of
    // the series are 0 and 1
    f[0] = 0;
    f[1] = 1;

    // Add the previous 2 numbers
    // in the series and store
    // last digit of result
    for (ll i = 2; i <= n; i++)
        f[i] = (f[i - 1] + f[i - 2]) % 10;

    return f[n];
}

// Returns last digit of n'th Fibonacci Number
long long int findLastDigit(long long int n)
{
    ll f[60] = {0};

    // Precomputing units digit of
    // first 60 Fibonacci numbers
    fib(f, 60);
    long long int b = n%60;
    return f[b];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double n;
        cin >> n;
        if(n==1)
        double store= log2(n);
        long long int y = (long long int) store;
        cout << store << endl;
        cout << y << endl;
        long long int ts=y-1;
        long long int k=2;
        while(ts--)
        {
            k=k*2;
        }
        cout << k << endl;
        cout << findLastDigit(k-1) << endl;
    }
    return 0;
}
