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
        ll n, m;
        cin >> n >> m;
        ll arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin >> arr[i][j];
        }
        int r=0, c=0;
        for(int i=0; i<n; i++)
        {
            int flag=0;
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]==1)
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
                r++;
        }
        for(int i=0; i<m; i++)
        {
            int flag=0;
            for(int j=0; j<n; j++)
            {
                if(arr[j][i]==1)
                {
                    flag=1;
                    break;
                }
            }
            if(!flag)
                c++;
        }
        int res = min(r ,c);
        if(res%2!=0)
            cout << "Ashish" << endl;
        else
            cout << "Vivek" << endl;
    }
	return 0;
}
