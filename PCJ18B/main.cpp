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
        if(n%2==0)
        {
            n=n/2;
            int k = (2*n*(n+1)*((2*n)+1))/3;
            cout << k << endl;
        }
        else
        {
            n=(n+1)/2;
            int k = (n*((2*n)+1)*((2*n)-1))/3;
            cout << k << endl;
        }
    }
    return 0;
}
