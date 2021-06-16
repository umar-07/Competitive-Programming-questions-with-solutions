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
        ll n, k;
        cin >> n >> k;
        if(n%2!=0 && k%2==0)
            cout << "NO" << endl;
        else if(n%2==0 && k%2!=0)
        {
            if(n<2*k)
                cout << "NO" << endl;
            else
            {
                int sum=n;
                cout << "YES" << endl;
                for(int i=0; i<k; i++)
                {
                    if(i==k-1)
                        {
                            cout << sum << endl;
                            continue;
                        }
                    cout << "2" << " ";
                    sum-=2;
                }
            }
        }
        else if(n%2!=0 && k%2!=0)
        {
            if(n<k)
                cout << "NO" << endl;
            else
            {
                int sum=n;
                cout << "YES" << endl;
                for(int i=0; i<k; i++)
                {
                    if(i==k-1)
                    {
                        cout << sum << endl;
                        continue;
                    }
                    cout << "1" << " ";
                    sum-=1;
                }
            }
        }
        else
        {
            if(n<k)
                cout << "NO" << endl;
            else
            {
                int sum=n;
                cout << "YES" << endl;
                for(int i=0; i<k; i++)
                {
                    if(i==k-1)
                    {
                        cout << sum << endl;
                        continue;
                    }
                    cout << "1" << " ";
                    sum-=1;
                }
            }
        }
    }
	return 0;
}
