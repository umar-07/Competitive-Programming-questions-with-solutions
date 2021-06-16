#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a, b, c;
        cin >> a >> b >> c;
        if((a+b+c)<=n)
            cout << "1" << endl;
        else if((a+b)<=n)
            cout << "2" << endl;
        else if((b+c)<=n)
            cout << "2" << endl;
        else
            cout << "3" << endl;
    }
    return 0;
}
