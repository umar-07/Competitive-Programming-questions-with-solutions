#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        string l(n,'1');
        string r(n, '1');
        for(int i=0; i<n; i++)
        {
            l[i]=s[i];
            r[i]=s[i];
        }
        //cout << l << r << endl;
        r[0]=s[n-1];
        for(int i=1; i<n; i++)
        {
            r[i]=s[i-1];
        }
        l[n-1]=s[0];
        for(int i=0; i<n-1; i++)
        {
            l[i]=s[i+1];
        }
        //cout << l << " " << r << endl;
        if(l==r)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
	return 0;
}
