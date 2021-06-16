#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        for(int i=1; i<=k; i++)
            cout << i << " ";
        cout << n << " ";
        for(int i=k+1; i<=n; i++)
        {
            if(i==n)
                continue;
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
