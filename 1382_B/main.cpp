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
        int pole=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=1)
            {
                pole=1;
                break;
            }
        }
        if(pole==0)
        {
            if(n%2==0)
            {
                cout << "Second" << endl;
            }
            else
                cout << "First" << endl;
            continue;
        }
        else
        {
            if(arr[0]!=1)
            {
                cout << "First" << endl;
                continue;
            }
            else
            {
                int idx=0;
                for(int i=0; i<n; i++)
                {
                    if(arr[i]!=1)
                        break;
                    idx++;
                }
                if(idx%2!=0)
                    cout << "Second" << endl;
                else
                    cout << "First" << endl;
                continue;
            }
        }
    }
	return 0;
}
