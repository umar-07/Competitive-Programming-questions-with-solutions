#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    string s;
    cin >> s;
    string str;
    ll c=1;
    str.push_back(s[0]);
    for(int i=1; i<s.size(); i++)
    {
        if(s[i]!=s[i-1])
        {
            c=1;
            str.push_back(s[i]);
            continue;
        }
        else
        {
            c++;
            if(c<=2)
            {
                str.push_back(s[i]);
            }
            else
            {
                c++;
                continue;
            }
        }
    }
    vector <pair<char, ll> > v;
    v.push_back({str[0],1});
    for(int i=1; i<str.size(); i++)
    {
        if(str[i]==str[i-1])
            v.push_back({str[i], 2});
        else
            v.push_back({str[i],1});
    }
    for(int i=1; i<v.size(); i++)
    {
        if(v[i].second==2)
            v[i-1].second=2;
    }
    string res;
    ll n = v.size();
    for(int i=0; i<v.size(); ) //BOUNDS
    {
        if(v[i].second==2 && v[i+2].second==2 && i+3<n)
        {
            v[i+2].second=-1;
            v[i+3].second=1;
            res.push_back(v[i].first);
            res.push_back(v[i+1].first);
            res.push_back(v[i+3].first);
            i+=4;
            continue;
        }
        if(v[i].second==2)
        {

            res.push_back(v[i].first);
            res.push_back(v[i+1].first);
            i+=2;
            continue;
        }
        res.push_back(v[i].first);
        i+=1;
        continue;
    }
    cout << res << endl;
    return 0;
}
