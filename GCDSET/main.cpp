#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int l, g, r, flag=1;
        cin >> l >> r >> g;
        long long int up=0, low=0;
        if(g>r)
            flag=0;
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
        cout << (a-b+1) << endl;
    }
    return 0;
}
