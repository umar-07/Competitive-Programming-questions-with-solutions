#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll q;
    cin >> q;
    while(q--)
    {
        string str;
        cin >> str;
        ll m;
        cin >> m;
        ll arr[m];
        for(int i=0; i<m; i++)
            cin >> arr[i];
        map <char, int> s;
        for(int i=0; i<str.size(); i++)
        {
            s[str[i]]++;
        }
        auto itr=s.end();
        itr--;
        pair <ll, ll> sum[m];
        for(int i=0; i<m; i++)
        {
            sum[i].first=0;
            sum[i].second=0;
        }
        char word[m];
        int total=0;
        while(total<m)
        {
            vector <int> v;
            for(int i=0; i<m; i++)
            {
                if(arr[i]==sum[i].first && sum[i].second==0)
                {
                    v.push_back(i);
                    sum[i].second=1;
                }
            }
            total+=(v.size());
            //debug(total)
            //cout << endl;
            //cout << "INDEX to cahnge" << endl;
            //for(int i=0; i<v.size(); i++)
            //    cout << v[i] << " ";
            //cout << endl;
            while(itr->second < v.size())
                itr--;
            for(int i=0; i<v.size(); i++)
            {
                word[v[i]]= itr->first;
            }
            itr--;
            for(int i=0; i<v.size(); i++)
            {
                int k = v[i];
                for(int j=0; j<m; j++)
                {
                    if(sum[j].second==0)
                    {
                        sum[j].first += abs(j-k);
                    }
                }
            }
            /*cout << "After i : " << judge << endl;
            cout << "sum " << endl;
            for(int i=0; i<m; i++)
            {
                cout << sum[i].first << "," << sum[i].second << "   ";
            }
            cout << endl;*/
        }
        string res;
        for(int i=0; i<m; i++)
            res.push_back(word[i]);
        cout << res << endl;
    }
	return 0;
}
