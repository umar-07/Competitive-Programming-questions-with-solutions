#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll arr[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll h[(2*n)]={0};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            h[i+j]+=arr[i][j];
        }
    }
    ll h2[(2*n)]={0};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int k = i-j;
            if(k>=0)
            {
                h2[k]+=arr[i][j];
            }
            else
            {
                h2[(n-1)+abs(k)]+=arr[i][j];
            }
        }
    }
    ll maxi1=-1, maxi2=-1;
    ll x1=-1, y1=-1, x2=-1, y2=-1;
    /*cout << "h1: " << endl;
    for(int i=0; i<2*n; i++)
    {
        cout << "i+j: " << i << " : "  << h[i] << endl;
    }
    cout << "h2: " << endl;
    for(int i=0; i<2*n; i++)
    {
        cout << "i-j: " << i << " : " << h2[i] << endl;
    }*/
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            ll sum= h[i+j];
            int k = i-j;
            //cout << h[i+j];
            if(k>=0)
                {
                    sum+=h2[k];
                    //cout << "," << h2[k] << " ";
                }
            else
                {
                    sum+=h2[(n-1)+abs(k)];
                    //cout << "," << h2[(n-1)+abs(k)] << " ";
                }
            sum-=arr[i][j];
            if((i+j)%2==0)
            {
                if(sum>maxi1)
                {
                    maxi1=sum;
                    x1=i+1, y1=j+1;
                }
            }
            else
            {
                if(sum>maxi2)
                {
                    maxi2=sum;
                    x2=i+1, y2=j+1;
                }
            }
        }
        //cout << endl;
    }
    ll res=maxi1+maxi2;
    cout << res << endl;
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
	return 0;
}
