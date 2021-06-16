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
        string str;
        cin >> str;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]!='0')
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            double res;
            res = (n*1.0)/((k+1)*1.0);
            //debug(res)
            ll ans = ceil(res);
            cout << ans << endl;
            continue;
        }
        set <int> s;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='1')
                s.insert(i+1);
        }
        ll sum=0;
        auto itr = s.begin();
        if((*itr)!=1)
        {
            int j = *itr;
            if(abs(j-1)>k)
            {
                s.insert(1);
                sum++;
            }
        }
        itr = s.end();
        itr--;
        if((*itr)!=n)
        {
            int j= *itr;
            if(abs(n-j)>k)
            {
                s.insert(n);
                sum++;
            }
        }
        itr=s.begin();
       // debug(sum) cout << endl;
        while(itr!=s.end())
        {
            auto it = ++itr;
            itr--;
            if(it==s.end())
                break;
            //debug(*it) debug(*itr) cout << endl;
            if((((*it)-(*itr))-1) > 2*k)
            {
                int j = (*itr)+k+1;
              //  cout << "inserting " << j << endl;
                s.insert(j);
                sum++;
                continue;
            }
            else
                itr++;
        }
        cout << sum << endl;
    }
	return 0;
}
