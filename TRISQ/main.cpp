#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int b;
        cin >> b;
        if(b==1)
            cout << "0" << endl;
        else
        {
            b=b/2;
            cout << ((b*b)-b)/2 << endl;
        }
    }
    return 0;
}
