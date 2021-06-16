#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000003
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int findRank(string A) {
    string s;
    s=A;
    int n=s.size();
    map <char, int> m;
    int fact[30]={0};
    fact[0]=1;
    for(int i=1; i<30; i++)
    {
        fact[i]=(i*fact[i-1])%mod;
    }
    /*for(int i=0; i<30; i++)
        cout << fact[i] << " ";
    cout << endl;*/
    for(int i=0; i<n; i++)
    {
        m[s[i]]=0;
    }
    int j=1;
    for(auto itr=m.begin(); itr!=m.end(); itr++)
    {
        itr->second=j;
        j++;
    }
    int res=0;
    fact[0]=0;
    for(int i=0; i<n-1; i++)
    {
        char c = s[i];
        auto it=m.find(c);
        ll pre = it->second - 1;
        ll num=(n-1)-i;
        ll f = fact[num];
        res = ((res%mod) + ((pre*f)%mod))%mod;
        m.erase(c);
        int k=1;
        for(auto itr=m.begin(); itr!=m.end(); itr++)
        {
            itr->second=k;
            k++;
        }
    }
    res= ((res%mod)+1)%mod;
    return res;
}



int main()
{
    int t;
    cin >> t;
    while(t--)
    {string str;
    cin >> str;
    ll k = findRank(str);
	cout << k << endl;
	}return 0;
}
