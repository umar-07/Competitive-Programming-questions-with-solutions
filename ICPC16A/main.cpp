#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, a, b;
        cin >> x >> y >> a >> b;
        int c1, c2;
        c1=a-x;
        c2=b-y;
        if((c1!=0)&&(c2!=0))
            cout << "sad" << endl;
        else
        {
            if(c1==0)
            {
                if(c2>0)
                    cout << "up" << endl;
                else
                    cout << "down" << endl;
            }
            else
            {
                if(c1>0)
                    cout << "right" << endl;
                else
                    cout << "left" << endl;
            }
        }
    }
    return 0;
}
