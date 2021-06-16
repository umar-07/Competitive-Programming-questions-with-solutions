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
        string s;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]<k)
                s.push_back('0');
            else
            {
                if(arr[i]%k==0)
                    s.push_back('1');
                else
                    s.push_back('0');
            }
        }
        cout << s << endl;
    }
	return 0;
}
