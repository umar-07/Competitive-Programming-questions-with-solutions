#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y;
        int counti=0;
        cin >> x >> y;
        cin.sync();
        while(x!=y)
        {
            if((x==1)||(y==1))
            {
                counti=1;
            }
            else
            {
                if(x>y)
                {
                    long long int div=0;
                    div=x/y;
                    x=x-(y*div);
                    if(x==y)
                    {
                        break;
                    }
                }
                else if(y>x)
                {
                    long long int div=0;
                    div=y/x;
                    y=y-(x*div);
                    if(x==y)
                    {
                        break;
                    }
                }
                else if(x==y)
                    break;
            }
        }
        if(counti==1)
        {
            cout << 2 << endl;
        }
        else if (counti==0)
        {
            cout << x+y << endl;
        }
    }
    return 0;
}
