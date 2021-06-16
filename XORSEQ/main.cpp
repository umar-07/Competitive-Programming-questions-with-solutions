#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    map <int, int> m;
    m[0]=0;
    for(int i=1; i<=n; i++)
        m[i]=i;
    map <int, int> mp;
    mp[0]=0;
    mp[1]=1;
    for(int i=2; i<=n; i++)
        mp[i]=m[i]^mp[i-1];
    //for(int i=0; i<10; i++)
    //    cout << mp[i] << " ";
    //cout << endl;
    set <int> :: iterator itr1;
    set <int> :: iterator itr2;
    int q;
    cin >> q;
    set <int> s;
    while(q--)
    {
        ll c, x;
        cin >> c >> x;
        if(c==1)
        {
            s.insert(x);
        }
        else if(c==2)
        {
            itr1 = s.lower_bound(x);
            itr2 = s.upper_bound(x);
            if(itr1==s.end() && itr2==s.end())
            {
                //cout << "CONDITION 1: Upper bound " << *itr2 << " Lower bound: " << *itr1 << endl;
                //cout << mp[n] << " " << mp[x-1] << endl;
                ll res = mp[n]^mp[x-1];
                cout << res << endl;
            }
            else if(itr1!=s.end() && itr2==s.end())
            {
                //cout << "CONDITION 2: Upper bound not defined Lower bound: " << *itr1 << endl;
                //cout << mp[n] << " " << mp[x] << endl;
                ll res = mp[n]^mp[x];
                cout << res << endl;
            }
            else if(itr1!=s.end() && itr2!=s.end() && itr1==itr2)
            {
                //cout << "CONDITION 3: Upper bound " << *itr2 << " Lower bound: " << *itr1 << endl;
                //cout << "x: " << x << "itr--: " << *(itr1) - 1 << endl;
                ll res = mp[*(itr1)-1]^mp[x-1];
                cout << res << endl;
            }
            else if(itr1!=s.end() && itr2!=s.end() && itr1!=itr2)
            {
                ll x, y, flag=0;
                //cout << "CONDITION 4: Upper bound " << *itr2 << " Lower bound: " << *itr1 << endl;
                while(itr2!=s.end())
                {
                    if((*itr2)-(*itr1)>1)
                    {
                        y=*itr2;
                        x=*itr1;
                        flag=1;
                        break;
                    }
                    itr1++;
                    itr2++;
                }
                if(flag==1)
                {
                    ll res = mp[y-1]^mp[x];
                    cout << res << endl;
                }
                else
                {
                    ll res = mp[n]^mp[x];
                    cout << res << endl;
                }
            }
        }
    }
    return 0;
}
