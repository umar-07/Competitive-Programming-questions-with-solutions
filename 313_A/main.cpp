#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n;
    cin >> n;
    if(n>=0)
    {
        cout << n << endl;
        return 0;
    }
    else
    {
        ll x = abs(n);
        ll d=0;
        ll num=x;
        while(num>0)
        {
            d++;
            num=num/10;
        }
        if(d==1)
        {
            cout << 0 << endl;
        }
        else if(d==2)
        {
            ll k=x;
            k=k/10;
            ll p = k%10;
            ll q = x%10;
            if(p>=q)
            {
                if(q==0)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << q*(-1) << endl;
                }
            }
            else
                cout << p*(-1) << endl;
        }
        else
        {
            ll s=0;
            ll k=x;
            k=k/10;
            ll p=k%10;
            ll q=x%10;
            if(p>=q)
                s=1;
            else
                s=0;
            ll res=0;
            vector <ll> ans;
            while(x>0)
            {
                ans.push_back(x%10);
                x=x/10;
            }
            vector <ll> v;
            for(int i=0; i<ans.size(); i++)
            {
                if(i==s)
                    continue;
                v.push_back(ans[i]);
            }
            reverse(v.begin(), v.end());
            for(int i=0; i<v.size(); i++)
            {
                res = res*10 + v[i];
            }
            cout << res*(-1) << endl;
        }
    }
	return 0;
}
