#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, d;
        cin >> n;
        int f1, f2, f3, f4, f5;
        f1 = 12500;
        f2 = 25000;
        f3 = 37500;
        f4 = 50000;
        f5 = 62500;
        if(n<=250000)
            {
                d=0;
                cout << n << endl;
            }
        else if(n>250000 && n<=500000)
            {
                d=5;
                int a = (n-250000)*0.05;
                cout << n-a << endl;
            }
        else if(n>500000 && n<=750000)
            {
                d=10;
                int a = (n-500000)*0.1;
                cout << n - a - f1 << endl;

            }
        else if(n>750000 && n<=1000000)
            {
                d=15;
                int a = (n-750000)*0.15;
                cout << n - a - f1 -f2 << endl;
            }
        else if(n>1000000 && n<=1250000)
            {
                d=20;
                int a = (n-1000000)*0.2;
                cout << n - a - f1 -f2 - f3 << endl;

            }
        else if(n>1250000 && n<=1500000)
            {
                d=25;
                int a = (n-1250000)*0.25;
                cout << n - a - f1 -f2 -f3 -f4 << endl;

            }
        else if(n>1500000)
            {
                d=30;
                int a = (n-1500000)*0.3;
                cout << n - a - f1 - f2 - f3 - f4 - f5 << endl;

            }
    }
    return 0;
}
