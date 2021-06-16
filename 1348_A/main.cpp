#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    //fast_input;
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll m=n/2;
        m=m-1;
        ll s1=0;
        for(int i=1; i<=m; i++)
            s1+= pow(2,i);
        s1+= pow(2,n);
        ll s2=0;
        for(int i=m+1; i<n; i++)
            s2+=pow(2,i);
        cout << abs(s2-s1) << endl;
    }
	return 0;
}
