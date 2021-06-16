#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int c, d, l;
        cin >> c >> d >> l;
        if(l%4!=0)
            cout << "no" << endl;
        else
        {
            if((2*d)>=c)
            {
                long long int maxi, mini;
                maxi=(c+d)*4;
                mini=d*4;
                if((l<=maxi)&&(l>=mini))
                    cout << "yes" << endl;
                else
                    cout << "no" << endl;
            }
            else
            {
                long long int maxi, mini;
                maxi=(c+d)*4;
                long long int diff=((c)-(2*d));
                mini=(d+diff)*4;
                if((l<=maxi)&&(l>=mini))
                    cout<< "yes" << endl;
                else
                    cout<< "no" << endl;
            }
        }
    }
    return 0;
}
