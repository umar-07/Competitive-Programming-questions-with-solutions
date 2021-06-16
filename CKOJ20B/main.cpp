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
    {ll n, k;
    cin >> n >> k;
    ll arr[n];
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        sum+=arr[i];
    }
    ll avg=sum/3;
    ll num=INT_MAX;
    ll idx=-1;
    for(int j=avg-10; j<=avg+10; j++)
    {
        ll x=j;
        ll s=0;
        for(int i=0; i<n; i++)
        {
            s+= abs(pow((x-arr[i]),k));
        }
        if(s<=num)
        {
            num=s;
            idx=j;
            continue;
        }
    }
    cout << idx << endl;}
	return 0;
}
