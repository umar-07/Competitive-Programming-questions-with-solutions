#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


ll ask(int a, int b, int c, int d)
{
    cout << 1 << " ";
    cout << a+1 << " " << b+1 << " " << c+1 << " " << d+1 << endl;
    ll x;
    cin >> x;
    return x;
}


int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, p;
        cin >> n >> p;
        ll arr[n][n];
        int flag=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                arr[i][j]=-1;
        }
        for(int i=0; i<n; i++)
        {
            if(flag==1)
                break;
            for(int j=0; j<n; j++)
            {
                ll x = ask(i, j, i, j);
                if(x==-1)
                {
                    flag=1;
                    break;
                }
                else if(x==1)
                    arr[i][j]=1;
                else if(x==0)
                    arr[i][j]=0;
            }
        }
        cout << "2" << endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
        ll k;
        cin >> k;
        if(k==-1)
        {
            break;
        }
        if(k==1)
            continue;
    }
	return 0;
}
