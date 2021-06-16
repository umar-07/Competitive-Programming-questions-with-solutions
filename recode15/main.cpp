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
        ll o=0, e=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]%2==0)
                e++;
            else
                o++;
        }
        ll sum1=0;
        ll sum2=0;
        if(n==1)
        {
            cout << "0" << endl;
            continue;
        }
        if(o==n || e==n)
        {
            cout << n << endl;
            continue;
        }
        sum1 = (2*(o-1))+e;
        sum2 = (2*(e-1))+o;
        cout << min(sum1, sum2) << endl;
    }
	return 0;
}
