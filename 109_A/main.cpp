#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll s=-1, f=-1;
    for(int i=0; i<n; i++)
    {
        ll k = 4*i;
        ll rem = n-k;
        if(rem<0)
            break;
        if(rem%7==0)
        {
            s=rem/7;
            f=i;
            //debug(s);
            //debug(f);
            break;
        }
    }
    if(s==-1 || f==-1)
        cout << "-1" << endl;
    else
    {
        for(int i=0; i<f; i++)
            cout << "4";
        for(int i=0; i<s; i++)
            cout << "7";
        cout << endl;
    }
	return 0;
}
