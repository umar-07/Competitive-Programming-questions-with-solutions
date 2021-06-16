#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long int l, r, counti;
    while(t--)
    {
        cin >> l >> r;
        if((l%2==0)&&(r%2)==0)
            counti=(r-l)/2;
        else
            counti=((r-l)/2)+1;
        //cout << counti << endl;
        if(counti%2!=0)
            cout << "Odd" << endl;
        else
            cout << "Even" << endl;
    }
    return 0;
}
