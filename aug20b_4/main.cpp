#include<bits/stdc++.h>
using namespace std ;
#define ll long long
#define endl "\n"

void solve()
{
	ll int i, k=0;
	map<char,int> m, m2;
	string s, p, temp, ans="";
	cin >> s;
	cin >> p;
	sort(s.begin(), s.end());
	for(i=0 ;i<s.length() ;i++)
        m[s[i]]++;
	for(i=0 ;i<s.length() ;i++)
	{
		if(m2[s[i]]==0)
		{
			temp.push_back(s[i]);
			m2[s[i]]++;
		}
	}
	for(i=0 ;i<p.length() ;i++)
		m[p[i]]--;
	for(i=0 ;i<temp.length() ;i++)
	{
		while(m[temp[i]]--)
			ans+=temp[i];
		if(temp[i]==p[0])
			ans+=p;
	}
	cout << ans << endl;
}

int main()
{
	ll int t ;
	cin >> t;
	while (t--)
	{
		solve() ;
	}
	return 0 ;
}
