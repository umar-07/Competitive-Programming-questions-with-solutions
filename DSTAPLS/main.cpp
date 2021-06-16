#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k;
        cin >> n >> k;
        if(k==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(n<k)
                cout << "YES" << endl;
            else if(n==k)
                cout << "YES" << endl;
            else
            {
                long long int div=n/k;
                if(div%k==0)
                    cout << "NO" << endl;
                else
                    cout << "YES" << endl;
            }
        }
    }
    return 0;
}
