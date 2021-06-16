#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int k = gcd(n,m);
        cout << (n*m)/(k*k) << endl;
    }
    return 0;
}
