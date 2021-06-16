#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int p, q, k;
        cin >> p >> q >> k;
        int div=(p+q)/k;
        if(div==0)
            cout << "CHEF" << endl;
        else if(div%2==0)
            cout << "CHEF" << endl;
        else
            cout << "COOK" << endl;
    }
    return 0;
}
