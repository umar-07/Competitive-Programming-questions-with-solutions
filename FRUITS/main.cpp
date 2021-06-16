#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int d;
        if(n>m)
            d=n-m;
        else
            d=m-n;
        if(d>k)
        {
            cout << d-k << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}
