#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll n, m;
    cin >> n >> m;
    ll arr[m];
    for(int i=0; i<m; i++)
        cin >> arr[i];
    ll sum=0;
    int flag=0;
    if(m==1)
    {
        cout << arr[0]-1 << endl;
        return 0;
    }
    for(int i=1; i<m; i++)
    {
        if(arr[i-1]>arr[i])
        {
            if(flag==0)
            {
                flag=1;
                sum+=(n-1);
            }
            else
                sum+=(n);
        }
    }
    if(flag==0)
        sum+=(arr[m-1]-1);
    else
        sum+=(arr[m-1]);
    cout << sum << endl;
	return 0;
}
