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
        ll arr[n];
        ll a=0, b=0, c=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]%3==0)
                a++;
            else if(arr[i]%3==1)
                b++;
            else
                c++;

        }
        ll m=n/3;
        if(a==b && b==c)
            cout << 0 << endl;
        else if(a==b)
        {
            ll d1 = abs(m-a);
            ll d2 = abs((m-b))*2;
            cout << d1+d2 << endl;
        }
        else if(a==c)
        {
            ll d1 = abs(m-c);
            ll d2 = abs((m-a))*2;
            cout << d1+d2 << endl;
        }
        else if(c==b)
        {
            ll d1 = abs(m-b);
            ll d2 = abs((m-c))*2;
            cout << d1+d2 << endl;
        }
        else
        {
            ll maxi = max(a, max(b,c));
            if(a==maxi)
            {
                if(m>=c && m>=b)
                {
                    ll d1 = (m-b);
                    ll d2 = ((m-c))*2;
                    cout << d1 + d2 << endl;
                }
                else
                {
                    ll mini = min(c,b);
                    if(b==mini)
                    {
                        ll d1 = abs(m-a);
                        ll d2 = abs((m-c))*2;
                        cout << d1 + d2 << endl;
                    }
                    else
                    {
                        ll d1 = abs(m-b);
                        ll d2 = abs((m-a))*2;
                        cout << d1+d2 << endl;
                    }
                }
            }
            else if(b==maxi)
            {
                if(m>=a && m>=c)
                {
                    ll d1 = (m-c);
                    ll d2 = ((m-a))*2;
                    cout << d1 + d2 << endl;
                }
                else
                {
                    ll mini = min(a,c);
                    if(a==mini)
                    {
                        ll d1 = abs(m-c);
                        ll d2 = abs((m-b))*2;
                        cout << d1 + d2 << endl;
                    }
                    else
                    {
                        ll d1 = abs(m-b);
                        ll d2 = abs((m-a))*2;
                        cout << d1+d2 << endl;
                    }
                }
            }
            else
            {
                if(m>=a && m>=b)
                {
                    ll d1 = (m-a);
                    ll d2 = ((m-b))*2;
                    cout << d1 + d2 << endl;
                }
                else
                {
                    ll mini = min(a,b);
                    if(a==mini)
                    {
                        ll d1 = abs(m-c);
                        ll d2 = abs((m-b))*2;
                        cout << d1 + d2 << endl;
                    }
                    else
                    {
                        ll d1 = abs(m-a);
                        ll d2 = abs((m-c))*2;
                        cout << d1+d2 << endl;
                    }
                }
            }
        }
    }
	return 0;
}
