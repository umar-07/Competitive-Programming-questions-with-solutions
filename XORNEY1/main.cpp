// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to return the XOR of elements
// from the range [1, n]
long long int findXOR(long long int n)
{
    long long int mod = n % 4;

    // If n is a multiple of 4
    if (mod == 0)
        return n;

    // If n % 4 gives remainder 1
    else if (mod == 1)
        return 1;

    // If n % 4 gives remainder 2
    else if (mod == 2)
        return n + 1;

    // If n % 4 gives remainder 3
    else if (mod == 3)
        return 0;
}

// Function to return the XOR of elements
// from the range [l, r]
long long int findXOR(long long int l, long long int r)
{
    return (findXOR(l - 1) ^ findXOR(r));
}

// Driver code
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int l, r, k;
        cin >> l >> r;
        k= findXOR(l, r);
        if(k%2==0)
            cout << "Even" << endl;
        else
            cout << "Odd" << endl;
    }

    return 0;
}
