#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        if(n==0)
        {
            cout << "0" << endl;
        }
        else if(n>0)
        {
            if(a==b)
            {
                cout << "0" << endl;
            }
            else
            {
                if(a==0)
                {
                    if(b>0)
                    {
                        cout << "2" << endl;
                    }
                    else
                    {

                    }
                }
            }
        }
    }
    return 0;
}
