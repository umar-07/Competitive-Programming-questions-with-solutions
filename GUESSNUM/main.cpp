#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll a, m;
        cin >> a >> m;
        vector <ll> v;
        for(int i=1; i<=sqrt(m); i++)
        {
            if(m%i==0)
            {
                if(m/i == i)
                    v.push_back(i);
                else
                {
                    v.push_back(m/i);
                    v.push_back(i);
                }
            }
        }
        vector <ll> res;
        vector <ll> :: iterator itr;
        for(itr=v.begin(); itr!=v.end(); itr++)
        {
            ll n;
            n = (m-(*itr))/a;
            if(n%(*itr)==0)
                res.push_back(n);
        }
        sort(res.begin(), res.end());
        cout << res.size() << endl;
        for(itr=res.begin(); itr!=res.end(); itr++)
        {
            cout << (*itr) << " ";
        }
        cout << endl;
    }
    return 0;
}
