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
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        ll maxi = *max_element(arr, arr+n);
        for(int i=0; i<n; i++)
        {
            arr[i]=maxi-arr[i];
        }
        if(k%2!=0)
        {
            for(int i=0; i<n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
        else
        {
            maxi = *max_element(arr, arr+n);
            for(int i=0; i<n; i++)
                arr[i]=maxi-arr[i];
            for(int i=0; i<n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
	return 0;
}
