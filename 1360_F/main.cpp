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
        ll n, m;
        cin >> n >> m;
        vector <string> v;
        for(int i=0; i<n; i++)
        {
            string str;
            cin >> str;
            v.push_back(str);
        }
        int h[m][26];
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<26; j++)
                h[i][j]=0;
        }
        for(int i=0; i<n; i++)
        {
            string str=v[i];
            for(int j=0; j<m; j++)
            {
                int k = str[j]-'a';
                h[j][k]++;
            }
        }
        string res;
        for(int i=0; i<m; i++)
        {
            int maxi=0;
            int idx=0;
            for(int j=0; j<26; j++)
            {
                if(h[i][j]>maxi)
                {
                    maxi=h[i][j];
                    idx=j;
                }
            }
            int k = idx + 'a';
            char c=k;
            res.push_back(c);
        }
        //debug(res) cout << endl;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            int c=0;
            for(int j=0; j<m; j++)
            {
                if(res[j]!=v[i][j])
                    c++;
                if(c>1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            cout << "-1" << endl;
        else
            cout << res << endl;
    }
	return 0;
}
