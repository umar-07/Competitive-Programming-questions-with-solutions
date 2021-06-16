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
        ll e=0, o=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
                e++;
            else
                o++;
        }
        if(o%2==0 && e%2==0)
            cout << "YES" << endl;
        else
        {
            int flag=0;
            sort(arr, arr+n);
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]+1==arr[i+1])
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
	return 0;
}
