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
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll b[n];
        for(int i=0; i<n; i++)
            cin >> b[i];
        int x=0, y=0;
        for(int i=0; i<n; i++)
        {
            if(b[i]==0)
                x++;
            else
                y++;
        }
        if(x==0 || y==0)
        {
            ll c[n];
            for(int i=0; i<n; i++)
                c[i]=arr[i];
            int flag=0;
            sort(c, c+n);
            for(int i=0; i<n; i++)
            {
                if(c[i]!=arr[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        else
            cout << "Yes" << endl;
    }
	return 0;
}
