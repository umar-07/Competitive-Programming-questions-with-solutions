#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int l, r, g;
        cin >> l >> r >> g;
        long long int up=0, low=0;
         while(1)
        {
            if(l%g==0)
            {
                low=l;
                break;
            }
            else
            {
                long long int rem=0;
                rem=l%g;
                rem=g-rem;
                l=l+rem;
            }
        }
        while(1)
        {
            if(r%g==0)
            {
                up=r;
                break;
            }
            else
            {
                long long int rem=0;
                rem=r%g;
                r=r-rem;
            }
        }
        long long int a, b;
        a=up/g;
        b=low/g;
        long long int mult=0;
        mult=a-b;
        if(mult>0)
        {
            cout << mult+1 << endl;
        }
        else if(mult==0)
        {
            if((low<=g)&&(up>=g))
                cout << "1" << endl;
            else
                cout << "0" << endl;
        }
        else
            cout << "0" << endl;
    }
    return 0;
}
//editorial used
