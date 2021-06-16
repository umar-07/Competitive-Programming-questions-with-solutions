#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll k=1;
        ll arr[n][n];
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                for(int j=0; j<n; j++)
                {
                    arr[i][j]=k;
                    k++;
                }
                continue;
            }
            else
            {
                for(int j=n-1; j>=0; j--)
                {
                    arr[i][j]=k;
                    k++;
                }
                continue;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
    }
	return 0;
}
