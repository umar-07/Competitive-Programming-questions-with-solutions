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
        vector <int> v;
        ll m = n;
        while(m>0)
        {
            int rem=m%10;
            v.push_back(rem);
            m=m/10;
        }
        int s=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]!=0)
                s++;
        }
        cout << s << endl;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==0)
                continue;
            if(v[i]!=0)
            {
                cout << v[i];
                for(int j=0; j<i; j++)
                    cout << "0";
            }
            cout << " ";
        }
        cout << endl;
    }
	return 0;
}
