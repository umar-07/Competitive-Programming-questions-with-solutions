#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        if(n%4!=0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            ll half=n/2;
            ll sum=0;
            for(int i=1; i<=half; i++)
            {
                cout << i*2 << " ";
                sum+=(i*2);
            }
            ll sum2=0;
            for(int i=1; i<half; i++)
            {
                cout << (2*i)-1 << " ";
                sum2+= ((2*i)-1);
            }
            ll last = sum-sum2;
            cout << last << endl;
        }
    }
	return 0;
}
