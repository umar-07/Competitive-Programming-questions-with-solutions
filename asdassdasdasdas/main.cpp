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
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        ll arr[n];
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                arr[i]=0;
            else
            {
                flag=1;
                arr[i]=1;
            }
        }
        if(!flag)
        {
            cout << s << endl;
            continue;
        }
        ll left[n];
        ll right[n];
        for(int i=0; i<n; i++)
        {
            left[i]=INT_MAX;
            right[i]=INT_MAX;
        }
        left[0]=-1;
        right[n-1]=-1;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
                continue;
            for(int j=0; j<n; j++)
            {
                if(arr[j]==0)
                    continue;
                if(j<i)
                {
                    if((i-j)<left[i])
                    {
                        left[i]=(i-j);
                    }
                }
                else
                {
                    if((j-i)<right[i])
                    {
                        right[i]=(j-i);
                    }
                }
            }
        }
        /*for(int i=0; i<n; i++)
            cout << left[i] << " ";
        cout << endl;
        for(int i=0; i<n; i++)
            cout << right[i] << " ";
        cout << endl;*/
        for(int i=0; i<n; i++)
        {
            if(right[i]==left[i])
                continue;
            ll mini = min(left[i],right[i]);
            if(mini<=m)
            {
                arr[i]=1;
            }
        }
        for(int i=0; i<n; i++)
            cout << arr[i];
        cout << endl;
    }
	return 0;
}
