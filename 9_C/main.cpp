#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[520]={0};
    for(ll i=0; i<520; i++)
    {
        ll binaryNum[32];
        ll j=0;
        ll k=i;
        while(k>0)
        {
            binaryNum[j]=k%2;
            k=k/2;
            j++;
        }
        ll num=0;
        for(ll idx=j-1; idx>=0; idx--)
        {
            num = num*10 + binaryNum[idx];
        }
        arr[i]=num;
    }
    ll c=0;
    for(int i=1; i<520; i++)
    {
        if(arr[i]<=n)
            c++;
    }
    cout << c << endl;
	return 0;
}
