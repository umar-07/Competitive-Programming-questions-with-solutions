#include <bits/stdc++.h>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double d2= (b*b)-(4*a*c);
    double d=pow(d2,0.5);
    cout.precision(6);
    cout << fixed << ((-b)+d)/(2.00*a) << endl << fixed << ((-b)-d)/(2.00*a) << endl;
    return 0;
}
