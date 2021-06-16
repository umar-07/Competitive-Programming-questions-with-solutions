#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double s;
        cin >> s;
        double h, d;
        if(s<1500)
        {
            h=s*0.1;
            d=s*0.9;
        }
        else
        {
            h=500;
            d=s*0.98;
        }
        double gs;
        gs= s+ h + d;
        cout.precision(2);
        cout << fixed << gs << endl;
    }
    return 0;
}
