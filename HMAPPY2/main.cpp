#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, a, b, k, c, d, e, f, maxi, mini;
        cin >> n >> a >> b >>k;
        if(a>b)
        {
            maxi=a;
            mini=b;
        }
        else
        {
            maxi=b;
            mini=a;
        }
        if(maxi%mini==0)
        {
            c=n/maxi;
            d=n/mini;
            f=d-c;
        }
        else
        {
        c=n/a;
        d=n/b;
        e=n/(a*b);
        f=(c+d)-(2*e);
        }
        if(f>=k)
            cout << "Win" << endl;
        else
            cout << "Lose" << endl;
    }
    return 0;
}
