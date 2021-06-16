#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        long long div=(x+y)/k;
        div++;
        if(div%2==0)
            cout << "PAJA" << endl;
        else
            cout << "CHEF" << endl;
    }
    return 0;
}
