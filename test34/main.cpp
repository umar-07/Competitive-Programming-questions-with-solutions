#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Initializing floating point variable
    double a = 4.223234232;
    double b = 2323.0;

    // Specifying precision
    cout.precision(4);

    // Printing normal values
    cout << "Normal values of floating point numbers\na = ";
    cout << a << "\nb = " << b << '\n' ;

    // Printing values using fixed ( till 4 )
    cout << "Values using fixed \n";
    cout << fixed << a << "\n" << b << '\n' ;

    // Printing values using scientific ( till 4 )
    // after 4, exponent is used
    //cout << "Values using scientific are : " << std::scientific << endl;
    //cout << a << '\n' << b << '\n' ;

    // Printing values using hexfloat ( till 4 )
    //cout << "Values using hexfloat are : " << std::hexfloat << endl;
    //cout << a << '\n' << b << '\n' ;

    // Printing values using defaultfloat ( till 4 )
    // same as normal
    //cout << "Values using defaultfloat are : " << std::defaultfloat << endl;
    //cout << a << '\n' << b << '\n' ;


    return 0;
}
