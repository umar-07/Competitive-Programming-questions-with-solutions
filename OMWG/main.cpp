#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        long long int ans = (2*m*n)-m-n;
        cout << ans << endl;
    }
    return 0;
}
