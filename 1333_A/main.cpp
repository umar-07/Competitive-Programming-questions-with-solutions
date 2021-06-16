#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
        cout << "W";
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(i==0 && j==0)
                    continue;
                cout << "B";
            }
            cout << endl;
        }
    }
    return 0;
}
