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
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>0)
            {
                flag=1;
                break;
            }
        }
        if(!flag)
        {
            cout << n << endl;
            continue;
        }
        /*for(int i=0; i<n ; i++)
            cout << arr[i] << " ";
        cout << endl;*/
        ll c=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]<0)
                c++;
            else
                break;
        }
        //cout << "in neg " << c << endl;
        int z=0;
        ll neg = c-1;
        for(int i=c; i<n; i++)
        {
            if(arr[i]==0)
            {
                c++;
                z++;
            }
            else
                break;
        }
        if(z<2 && c!=n )
        {
            if(z==0)
                c++;
            else if(z>0)
            {
                //cout << c << " " << neg << endl;
                if(abs(arr[neg])>=arr[c])
                    c++;
            }
        }
        cout << c << endl;
    }
	return 0;
}
