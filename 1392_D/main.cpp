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
        string a;
        cin >> a;
        int flag=0;
        for(int i=0; i<n-1; i++)
        {
            if(a[i]!=a[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            //cout << "hey";
            ll ans;
            if(n%2==0)
            {
                ans = n/2;
                ans--;
            }
            else
            {
                ans=n/2;
            }
            cout << ans << endl;
            continue;
        }
        ll ans=0;
        if(a[0]!=a[n-1])
        {
            for(int i=0; i<n-1; i++)
            {
                ll c=0;
                int j;
                if(a[i]=='R' && a[i]==a[i+1])
                {
                    c=1;
                    j=i+1;
                    while(j<n && a[j]=='R')
                    {
                        c++;
                        j++;
                    }
                    i=j-1;
                    ans=ans+ (c/3);
                    continue;
                }
                else if(a[i]=='L' && a[i]==a[i+1])
                {
                    c=1;
                    j=i+1;
                    while(j<n && a[j]=='L')
                    {
                        c++;
                        j++;
                    }
                    i=j-1;
                    ans=ans+ (c/3);
                    continue;
                }
            }
            cout << ans << endl;
        }
        else
        {
            int start=0, high=0;
            if(a[0]=='L')
            {
                for(int i=1; i<n; i++)
                {
                    if(a[i]=='L')
                        start=i;
                    else
                        break;
                }
            }
            if(a[0]=='R')
            {
                for(int i=1; i<n; i++)
                {
                    if(a[i]=='R')
                        start=i;
                    else
                        break;
                }
            }
            string um = a;
            reverse(um.begin(), um.end());

            if(um[0]=='L')
            {
                for(int i=1; i<n; i++)
                {
                    if(um[i]=='L')
                        high=i;
                    else
                        break;
                }
            }
            if(um[0]=='R')
            {
                for(int i=1; i<n; i++)
                {
                    if(um[i]=='R')
                        high=i;
                    else
                        break;
                }
            }
            high++;
            ll st=high;
            high = (n-high);
            start++;
            //debug(start);
            //debug(high);
            for(int i=start; i<high; i++)
            {
                ll c=0;
                int j;
                if(a[i]=='R' && a[i]==a[i+1])
                {
                    c=1;
                    j=i+1;
                    while(j<high && a[j]=='R')
                    {
                        c++;
                        j++;
                    }
                    i=j-1;
                    ans=ans+ (c/3);
                    continue;
                }
                else if(a[i]=='L' && a[i]==a[i+1])
                {
                    c=1;
                    j=i+1;
                    while(j<high && a[j]=='L')
                    {
                        c++;
                        j++;
                    }
                    i=j-1;
                    ans=ans+ (c/3);
                    continue;
                }
            }
            ll total = start+st;
            ans = ans + (total/3);
            cout << ans << endl;
        }
    }
	return 0;
}
