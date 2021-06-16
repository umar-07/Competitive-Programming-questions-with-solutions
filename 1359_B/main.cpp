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
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        ll mini = min( (2*x) , y);
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            for(int j=0; j<m; j++)
            {
                if(j+1<m)
                {

                if(s[j]=='.' && s[j+1]=='.')
                {
                    sum+=mini;
                    j++;
                    continue;
                }

                }
                if(s[j]=='.')
                {
                    sum+=x;
                    continue;
                }
            }
        }
        cout << sum << endl;
    }
	return 0;
}
