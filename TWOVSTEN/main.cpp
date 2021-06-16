#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;
    for(int k=0; k<t; k++)
    {
        int x;
        cin >> x;
        if(x%10==0)
        {
            cout << "0"<< endl;
        }
        else if(x%5==0)
        {
            cout << "1"<<endl;
        }
        else
            cout << "-1"<<endl;
    }
    return 0;
}
