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
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll trips=0;
        ll sum=0;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>k)
            {
                cout << "-1" << endl;
                flag=1;
                break;
            }
            else if(sum+arr[i]>k)
            {
                trips++;
                sum=arr[i];
            }
            else
                sum+=arr[i];
        }
        if(sum>0)
            trips++;
        if(!flag)
            cout << trips << endl;
    }
	return 0;
}
