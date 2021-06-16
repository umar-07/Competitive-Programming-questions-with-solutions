#include <bits/stdc++.h>
#define ll long long int
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
        ll res=0;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='x' && s[i+1]=='y')
            {
                res++;
                i++;
                continue;
            }
            if(s[i]=='y' && s[i+1]=='x')
            {
                res++;
                i++;
                continue;
            }
        }
        cout << res << endl;
    }
	return 0;
}
