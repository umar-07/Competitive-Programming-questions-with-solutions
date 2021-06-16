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
        string s;
        cin >> s;
        ll n=s.size();
        int flag=0;
        string a, b;
        for(int i=0; i<n; i++)
        {
            if(a.empty() && s[i]=='1')
                a.push_back('1');
            else if(!a.empty())
            {
                if(a=="101")
                    continue;
                if(a[0]=='1' && a.size()==1 && s[i]=='0')
                    a.push_back('0');
                else if(a=="10" && s[i]=='1')
                    a.push_back('1');
            }
            if(b.empty() && s[i]=='0')
                b.push_back('0');
            else if(!b.empty())
            {
                if(b=="010")
                    continue;
                if(b[0]=='0' && b.size()==1 && s[i]=='1')
                    b.push_back('1');
                else if(b=="01" && s[i]=='0')
                    b.push_back('0');
            }
        }
        debug(a) debug(b)
        if(a=="101" || b=="010")
            flag=1;
        if(flag==0)
        {
            cout << "0" << endl;
            continue;
        }
        ll d1=0, d2=0, d3=0, d4=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                d1++;
            else
                d2++;
        }
        //d3
        string cop=s;
        reverse(cop.begin(), cop.end());
        char ab = s[0];
        int st=0, en=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]==ab)
            {
                st=i;
                continue;
            }
            else
            {
                break;
            }
        }
        for(int i=st+1; i<n; i++)
        {
            if(s[i]!=ab)
                d3++;
        }
        ab=cop[0];
        st=0;
        for(int i=0; i<n; i++)
        {
            if(cop[i]!=ab)
                d4++;
        }
        int mini = min(d1, min(d2, min(d3, d4)));
        cout << mini << endl;
    }
	return 0;
}
