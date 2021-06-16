#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        string str;
        for(int i=0; i<b; i++)
        {
            char k = 97+i;
            str.push_back(k);
        }
        //cout << str << endl;
        ll rem=a-b;
        string s;
        while(s.size()<a)
        {
            s.append(str);
        }
        //cout << s << endl;
        string st;
        //cout << s.size() << endl;
        st.append(s, 0, a);
        //cout << "st: " << st << endl;
        string res;
        while(res.size()<n)
        {
            res.append(st);
        }
        //cout << res << endl;
        for(int i=0; i<n; i++)
            cout << res[i];
        cout << endl;
    }
    return 0;
}
