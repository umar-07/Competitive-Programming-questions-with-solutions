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
        if(n<=3)
            cout << "-1" << endl;
        else if(n==4)
            cout << 3 << " " << 1 << " " << 4 << " " << 2 << endl;
        else
        {
            vector <int> odd;
            vector <int> eve;
            for(int i=5; i<=n; i++)
            {
                if(i%2!=0)
                    odd.push_back(i);
                else
                    eve.push_back(i);
            }
            reverse(odd.begin(), odd.end());
            for(int i=0; i<odd.size(); i++)
                cout << odd[i] << " ";
            cout << 3 << " " << 1 << " " << 4 << " " << 2 << " ";
            for(int i=0; i<eve.size(); i++)
                cout << eve[i] << " ";
            cout << endl;
        }
    }
	return 0;
}
