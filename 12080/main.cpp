#include <bits/stdc++.h>

using namespace std;

long long int fib(int n) {
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, n;
        cin >> a >> b;
        cin >> n;
        if((n==0)||(n==1)||(n==2))
        {
            if(n==0)
                cout << a << endl;
            else if(n==1)
                cout << b << endl;
            else
            {
                long long int l=a^b;
                cout << l << endl;
            }
        }
        else
            {
                long long int x = fib(n-1)*a;
                long long int y = fib(n)*b;
                cout << fib(n) << endl;
                cout << x << " " << y << endl;
                long long int k =x^y;
                cout <<  k << endl;
            }
    }
    return 0;
}
