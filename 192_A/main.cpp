#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll arr[100001];
    arr[0]=-1;
    for(ll i=1; i<100001; i++)
    {
        arr[i]=i*(i+1);
    }
    ll n;
    cin >> n;
    n=2*n;
    ll flag=0;
    ll i=1;
    while(i!=100001 && arr[i]<n)
    {
        ll x = n-arr[i];
        if(binary_search(arr, arr+100001, x))
        {
            flag=1;
            break;
        }
        i++;
        continue;
    }
    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
	return 0;
}
