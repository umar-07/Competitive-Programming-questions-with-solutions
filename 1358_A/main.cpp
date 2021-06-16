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
        ll n, m;
        cin >> n >> m;
        if(n==1 && m==1)
        {
            cout << "1" << endl;
            continue;
        }
        if(n==1)
        {
            if(m%2==0)
                cout << m/2 << endl;
            else
                cout << m/2 + 1 << endl;
            continue;
        }
        if(m==1)
        {
            if(n%2==0)
                cout << n/2 << endl;
            else
                cout << n/2 + 1<< endl;
            continue;
        }
        ll sum=0;
        if(n%2==0)
        {
            sum = m*(n/2);
        }
        else
        {
            sum = m*(n/2);
            if(m%2==0)
                sum+= m/2;
            else
                sum+= (m/2)+1;
        }
        cout << sum << endl;
    }
	return 0;
}
