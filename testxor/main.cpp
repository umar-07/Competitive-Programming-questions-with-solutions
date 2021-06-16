#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        int z1, z2;
        cin >> l >> r;
        int q, w;
        q=l%4;
        w=r%4;
        if(q==0)
            z1=l;
        else if(q==1)
            z1=1;
        else if(q==2)
            z1=l+1;
        else if(q==3)
            z1=0;
        if(w==0)
            z2=r;
        else if(w==1)
            z2=1;
        else if(w==2)
            z2=r+1;
        else if(2==3)
            z2=0;
        int a=z1, b=z2;
        cout << a <<" " << b;
        cout << (a ^ b) << endl;
        cout << (3^4^5^6) << endl;
    }
    return 0;
}
