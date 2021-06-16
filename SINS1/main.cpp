#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, y, found=0;
        cin >> x >> y;
        while(true)
        {
            if((x==0)||(y==0)||(x==y))
                break;
            else if((x==1)||(y==1))
            {
                found=1;
                break;
            }
            else if(x>y)
            {
                if(x%y==0)
                {
                    x=y;
                }
                else
                    x=x%y;
            }
            else if(y>x)
            {
                if(y%x==0)
                {
                    y=x;
                }
                else
                    y=y%x;
            }
        }
        if(found==1)
            cout << "2" << endl;
        else
        {
            if((x==0)||(y==0))
            {
                if(x==0)
                    cout << y << endl;
                else
                    cout << x << endl;
            }
            else
                cout << x*2 << endl;
        }
    }
    return 0;
}
