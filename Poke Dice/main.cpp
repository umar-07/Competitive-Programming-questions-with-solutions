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
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll mini = 5*m;
        ll maxi = 55*m;
        ll c=0;
        for(int i=0; i<n; i++)
        {
            if((arr[i]%5==0)&&(arr[i]>=mini)&&(arr[i]<=maxi))
                c++;
        }
        cout << c << endl;
    }
	return 0;
}
