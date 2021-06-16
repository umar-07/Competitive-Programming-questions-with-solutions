#include <iostream>

using namespace std;

int main()
{
    int t, k;
    cin >> t;
    for(k=0; k<t; k++)
    {
        long long int counti=0, i, l, r, g;
        cin >> l >> r >> g;
        if(g>r)
            cout << "0" << endl;
        else if (g==r)
            cout << "1" << endl;
        else
        {
            for(i=l; i<=r; i++)
            {
                if(i%g==0)
                {
                    counti++;
                }
            }
            cout << counti << endl;
        }
    }
    return 0;
}
