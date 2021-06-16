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
        ll n;
        cin >> n;
        if(n==1)
        {
            cout << "FastestFinger" << endl;
            continue;
        }
        if(n==2)
        {
            cout << "Ashishgup" << endl;
            continue;
        }
        ll x=n;
        vector <ll> v;
        vector <ll> odd;
        while(n%2==0)
        {
            v.push_back(2);
            n/=2;
        }
        for(int i=3; i<=sqrt(n); i=i+2)
        {
            while(n%i==0)
            {
                if(i%2!=0)
                {
                    odd.push_back(i);
                }
                else
                {
                    v.push_back(i);
                }
                n/=i;
            }
        }
        if(n>2)
        {
            if(n%2!=0)
            {
                odd.push_back(n);
            }
            else
                v.push_back(n);
        }
        if(v.size()==0)
        {
            cout << "Ashishgup" << endl;
            continue;
        }
        if(odd.size()==0)
        {
            cout << "FastestFinger" << endl;
            continue;
        }
        if(v.size()==1 && odd.size()==1)
        {
            cout << "FastestFinger" << endl;
            continue;
        }
        else
        {
            cout << "Ashishgup" << endl;
            continue;
        }
    }
	return 0;
}
