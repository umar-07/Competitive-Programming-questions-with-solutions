#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int count=0;
    if(n<1000)
    {
    while(n>0)
    {
        n/=10;
        count++;
    }
    cout << count;
    }
    else
        cout << "More than 3 digits";
    return 0;
}
