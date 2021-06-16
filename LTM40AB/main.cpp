#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        long long counti=0;
        cin >> a >> b >> c >> d;
        for(int i=c; i<=d; i++)
        {
            if(i-a>0)
            {
                if(i-a>b)
                    counti=counti+b;
                else
                    counti=counti+(i-a);
            }
        }
        cout << counti << endl;
    }
    return 0;
}
