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
        if(n==1)
            cout << "1 1" << endl;
        else
        {
            int div=n/2;
            cout << "1 " ;
            cout << "1";
            for(int i=0; i<div; i++)
                cout << "0" ;
            cout << endl;
        }
    }
    return 0;
}
