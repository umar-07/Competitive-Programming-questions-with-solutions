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
        ll x, y, l, r;
        cin >> x >> y >> l >> r;
        bitset<64> a(x);
        bitset<64> b(y);
        bitset<64> c;
        if(x==0 || y==0)
        {
            cout << "0" << endl;
            continue;
        }
        int n = a.size();
        ll result=0;
        ll po=1;
        for(int i=0; i<n; i++)
        {
            if(a[i]==1 || b[i]==1)
                c[i]=1;
            else
                c[i]=0;
        }
        /*for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;
        for(int i=0; i<b.size(); i++)
            cout << a[i] << " ";
        cout << endl;*/
        ll k = c.size();
        /*for(int i=0; i<l; i++)
            cout << c[i] << " ";
        cout << endl;*/
        for(int i=0; i<k; i++)
        {
            result=result+c[i]*po;
            po=po*2;
        }
        //debug(po)
        cout << result << endl;

    }
	return 0;
}
