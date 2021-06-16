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
        sort(arr, arr+n);
        ll mini=arr[0];
        ll c=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>mini)
                c++;
        }
        cout << c << endl;
    }
	return 0;
}
