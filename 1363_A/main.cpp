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
        ll n, x;
        cin >> n >> x;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int o=0, e=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
                e++;
            else
                o++;
        }
        ll max_form=0;
        if(o==0)
            cout << "No" << endl;
        else if(e==0)
        {
            if(x%2!=0 && x<=o)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        else
        {
            if(o%2==0)
                o--;
            max_form=o+e;
            if(x<=max_form)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
    }
	return 0;
}
