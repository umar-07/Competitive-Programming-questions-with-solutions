#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    ll res[n];
    for(int i=0; i<n; i++)
    {
        res[arr[i]-1]=i+1;
    }
    for(int i=0; i<n; i++)
        cout << res[i] << " ";
    cout << endl;
	return 0;
}
