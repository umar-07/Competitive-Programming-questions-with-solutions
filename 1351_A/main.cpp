#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll c=0;
        set <pair <pair <int, int>, pair <int, int> > > u;
        int x=0, y=0;
        for(int i=0; i<s.size(); i++)
        {
            int prev_x=x, prev_y=y;
            if(s[i]=='N')
                y++;
            else if(s[i]=='S')
                y--;
            else if(s[i]=='E')
                x++;
            else if(s[i]=='W')
                x--;
           // cout << x << " "  << y << endl;
            int next_x=x, next_y=y;
            vector <pair <int, int> > v;
            pair <int, int> prevc = {prev_x, prev_y};
            pair <int, int> nextc = {next_x, next_y};
            v.push_back(prevc);
            v.push_back(nextc);
            sort(v.begin(), v.end());
            pair <pair <int, int>, pair <int, int> > p = {v[0], v[1]};
            if(u.find(p)==u.end())
            {
                c+=5;
                u.insert(p);
            }
            else
                c+=1;
        }
        cout << c << endl;
    }
	return 0;
}
