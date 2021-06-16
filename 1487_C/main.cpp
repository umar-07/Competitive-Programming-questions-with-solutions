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
        ll m = (n*(n-1))/2;
        pair <ll, ll> arr[m];
        int k=0;
        int j=1;
        while(j<n)
        {
            for(int i=2; i<=n; i++)
            {
                if((j+i-1)>n)
                    break;
                arr[k]={j,(j+i-1)};
                k++;
            }
            j++;
        }
        /*for(int i=0; i<m; i++)
        {
            cout << arr[i].first << " " << arr[i].second << endl;
        }*/
        if(n%2!=0)
        {
            ll score[n]={0};
            ll each_win = (n-1)/2;
            ll ans[m]={0};
            for(int i=0; i<m; i++)
            {
                ll first = arr[i].first-1;
                ll second = arr[i].second-1;
                if(score[first]!=each_win)
                {
                    score[first]++;
                    ans[i]=1;
                }
                else
                {
                    score[second]++;
                    ans[i]=-1;
                }
            }
            for(int i=0; i<m; i++)
                cout << ans[i] << " ";
            cout << endl;
        }
        else
        {

        }
    }
	return 0;
}
