#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, flag=0;
        cin >> x >> y;
        if(x>(2*y))
        {
            cout << y << endl;
            flag=1;
        }
        if(flag==0)
        {
            int dif=x-y;
            if(x<=y)
                cout << "0" << endl;
            else
                cout << dif << endl;
        }
    }
    return 0;
}
