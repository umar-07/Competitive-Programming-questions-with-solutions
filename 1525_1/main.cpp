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
            b[i]=arr[i];
        sort(b, b+n);
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            if(arr[0]==1 || arr[n-1]==n)
            {
                cout << 1 << endl;
                continue;
            }
            else if(arr[0]==n && arr[n-1]==1)
            {
                cout << 3 << endl;
                continue;
            }
            else
                cout << 2 << endl;
        }
    }
	return 0;
}
