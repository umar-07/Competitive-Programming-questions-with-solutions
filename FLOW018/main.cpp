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
        long long int fact=1;
        while(n!=0)
        {
            fact=fact*n;
            n--;
        }
        cout<< fact << endl;
    }
    return 0;
}
