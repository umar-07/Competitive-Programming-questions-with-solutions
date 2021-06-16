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
        string s;
        cin >> s;
        ll n=s.size();
        ll arr[n];
        ll c=0;
        if(s[0]=='?')
            arr[0]=-1;
        else
            arr[0]=1;
        for(int i=1; i<n; i++)
        {
            if(s[i]=='?')
            {
                arr[i]=-1;
                continue;
            }
            if(s[i-1]=='?')
            {
                arr[i]=1;
                continue;
            }
            if(s[i-1]==s[i])
            {
                arr[i]=1;
                continue;
            }
            else
            {
                arr[i]=arr[i-1]+1;
            }
        }
        ll suf[n];
        if(s[n-1]=='?')
            suf[n-1]=-1;
        else
            suf[n-1]=1;
        for(int i=n-2; i>=0; i--)
        {
            if(s[i]=='?')
            {
                arr[i]=-1;
                continue;
            }
            if(s[i+1]=='?')
            {
                arr[i]=1;
                continue;
            }
            if(s[i+1]==s[i])
            {
                arr[i]=1;
                continue;
            }
            else
            {
                arr[i]=arr[i+1]+1;
            }
        }
        /*for(int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout << endl;*/
        for(int i=0; i<n; i++)
        {
            if(arr[i]==-1)
            {
                int start=i;
                int end=i;
                for(int j=i+1; j<n; j++)
                {
                    if(arr[j]==-1)
                    {
                        end++;
                        continue;
                    }
                    else
                        break;
                }
                i=end+1;
                ll prev=INT_MIN;
                ll after=INT_MIN;
                // if equal see some case for connecting both
                ll bet = end-start+1;
                if(start-1>=0)
                    prev=arr[start-1];
                if(end+1<n)
                    after=suf[end+1];
                if((prev+bet)>(after+bet))
                {
                    for(int j=start; j<=end; j++)
                    {
                        if(s[j-1]=='0')
                            s[j]='1';
                        else
                            s[j]='0';
                    }
                }
                else if((prev+bet)<=(after+bet))
                {
                    for(int j=end; j>=start; j--)
                    {
                        if(s[j+1]=='0')
                            s[j]='1';
                        else
                            s[j]='0';
                    }
                }

            }
        }
        ll res=0;
        c=1;
        if(n==1)
        {
            cout << 1 << endl;
            continue;
        }
        for(int i=1; i<n; i++)
        {
            if(s[i]!=s[i-1])
            {
                c++;
                continue;
            }
            else
            {
                res+= (c*(c+1))/2;
                c=1;
                continue;
            }
        }
        res+= (c*(c+1))/2;
        cout << res << endl;
    }
	return 0;
}
