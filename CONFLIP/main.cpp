#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int g;
        cin >> g;
        while(g--)
        {
            int l, n, q;
            cin >> l >> n >> q;
            int head, tail;
            if(n%2!=0)
            {
                head = n/2;
                tail = n/2 + 1;

            }
            else
            {
                head = n/2;
                tail = n/2;
            }
            if(l==1)
                {
                    if(q==1)
                        cout << head << endl;
                    else
                        cout << tail << endl;
                }
                else
                {
                    if(q==1)
                        cout << tail << endl;
                    else
                        cout << head << endl;
                }
        }
    }
    return 0;
}
