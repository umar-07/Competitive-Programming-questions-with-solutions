#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, r;
        cin >> n >> r;
        cout << ((r-1)*30)+20 << endl;
    }
    return 0;
}
