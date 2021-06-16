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
        string s;
        cin >> s;
        ll arr[n]={0};
        ll c=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!='*')
            {
                c=0;
                continue;
            }
            else
            {
                c+=1;
                arr[i]=c;
            }
        }
        ll maxi = *max_element(arr, arr+n);
        if(maxi>=k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
