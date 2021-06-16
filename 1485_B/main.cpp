#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n, q, k;
    cin >> n >> q >> k;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    ll inc[n]={0};
    ll dec[n]={0};
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            dec[0]=arr[i]-1;
            inc[0]=arr[i+1]-arr[i]-1;
        }
        else if(i==n-1)
        {
            dec[i]=arr[i]-arr[i-1]-1;
            inc[i]=k-arr[i];
        }
        else
        {
            dec[i]=arr[i]-arr[i-1]-1;
            inc[i]=arr[i+1]-arr[i]-1;
        }
    }
    ll pre_inc[n]={0};
    ll pre_dec[n]={0};
    pre_inc[0]=inc[0];
    pre_dec[0]=dec[0];
    for(int i=1; i<n; i++)
    {
        pre_inc[i]=pre_inc[i-1]+inc[i];
    }
    for(int i=1; i<n; i++)
    {
        pre_dec[i]=pre_dec[i-1]+dec[i];
    }
    /*for(int i=0; i<n; i++)
        cout << dec[i] << " ";
    cout << endl;
    cout << "inc down" << endl;
    for(int i=0; i<n; i++)
        cout << inc[i] << " ";
    cout << endl;*/
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
        l--;
        r--;
        ll total=0, lower=0, upper=0;
        lower = arr[l]-1;
        upper = k-arr[r];
        total=upper+lower;
        total+=inc[l];
        total+=dec[r];
        total+= (pre_inc[r-1]-pre_inc[l]);
        total+= (pre_dec[r-1]-pre_dec[l]);
        cout << total << endl;
    }
	return 0;
}
