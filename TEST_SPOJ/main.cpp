#include <iostream>

using namespace std;

int main()
{
    int flag=0;
    while(1)
    {
        int x;
        cin >> x;
        if(x==42)
            break;
        cout << x << endl;
    }
    return 0;
}
