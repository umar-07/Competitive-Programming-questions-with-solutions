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
        ll m=INT_MAX;
        ll idx=-1;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]<m)
            {
                m=arr[i];
                idx=i;
            }
        }
        if(n==1)
        {
            cout << 0 << endl;
            continue;
        }
        ll b[n]={0};
        cout << n-1 << endl;
        ll curr=m+1;
        for(int i=0; i<n; i++)
        {
            if(i==idx)
            {
                b[i]=m;
                continue;
            }
            else if(i<idx)
            {
                if(idx-1>=0 && i==idx-1)
                {
                    while(__gcd(curr,m)!=1)
                    {
                        curr++;
                    }
                }
                if(i==idx-1)
                {
                    if(idx-2>=0)
                    {
                        while(__gcd(curr,m)!=1 && __gcd(curr, arr[idx-2])!=1)
                            curr++;
                    }
                }
                cout << i+1 << " " << idx+1 << " " << curr << " " << m << endl;
                b[i]=curr;
                curr++;
            }
            else
            {
                if(idx+1<n && i==idx+1)
                {
                    while(__gcd(curr,m)!=1)
                    {
                        curr++;
                    }
                }
                if(i==idx+1)
                {
                    if(idx+2<n)
                    {
                        while(__gcd(curr,m)!=1 && __gcd(curr, arr[idx+2])!=1)
                            curr++;
                    }
                }
                cout << idx+1 << " " << i+1 << " " << m << " " << curr << endl;
                b[i]=curr;
                curr++;
            }
        }

    }
	return 0;
}
