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
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        ll s=1;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<=s)
            {
                s+=1;
                continue;
            }
            else
            {
                int ps=s;
                while(1)
                {
                    if(i==n)
                    {
                        flag=1;
                        break;
                    }
                    ps+=1;
                    if(arr[i]<ps)
                    {
                        break;
                    }
                    i++;
                }
                if(flag==1)
                    break;
                else
                {
                    s=ps;
                }
            }
        }
        cout << s << endl;
    }
	return 0;
}
