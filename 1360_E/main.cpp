#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n][n];
        for(int i=0; i<n; i++)
        {
            string str;
            cin >> str;
            for(int j=0; j<n; j++)
            {
                if(str[j]=='0')
                    arr[i][j]=0;
                else
                    arr[i][j]=1;
            }
        }
        int flag=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i][j]==1)
                {
                    if(i==n-1 || j==n-1)
                        continue;
                    else if(arr[i+1][j]==1 || arr[i][j+1]==1)
                        continue;
                    else
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
	return 0;
}
