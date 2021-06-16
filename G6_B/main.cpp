#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x;
        cin >> x;
        if(x<=14)
            cout << "NO" << endl;
        else
        {
            long long int div = x%14;
            if((div>=1)&&(div<=6))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
