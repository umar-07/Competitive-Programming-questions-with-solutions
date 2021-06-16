#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
using namespace std;

int main()
{
    ll n;
    cin >> n;
    pair <ll, ll> arr[n][n];
    for(int i=0; i<n; i++)
    {
        int s;
        if(i%2==0)                  //s=1, white && s=0, black
            s=1;
        else
            s=0;
        for(int j=0; j<n; j++)
        {
            if(s==0)
                s=1;
            else
                s=0;
            ll op;
            cin >> op;
            arr[i][j]={op,s};
        }
    }
    /*for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cout << arr[i][j].first << "," << arr[i][j].second << " ";
        cout << endl;
    }*/
    ll maxi1=-1, maxi2=-1;
    ll x1=-1, y1=-1, x2=-1, y2=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            ll x=i, y=j;
            ll sum=0;
            for(int k=0; k<n; k++)                  //Lower Right
            {
                if(i+k<n && j+k<n)
                    sum+= arr[i+k][j+k].first;
                else
                    break;
            }
            for(int k=1; k<n; k++)                  //Upper Left
            {
                if(i-k>=0 && j-k>=0)
                    sum+= arr[i-k][j-k].first;
                else
                    break;
            }
            for(int k=1; k<n; k++)                 //Lower Left
            {
                if(i+k<n && j-k>=0)
                    sum+= arr[i+k][j-k].first;
                else
                    break;
            }
            for(int k=1; k<n; k++)                 //Upper Right
            {
                if(i-k>=0 && j+k<n)
                    sum+= arr[i-k][j+k].first;
                else
                    break;
            }
            //cout << i+1 << " " << j+1 << "  :  " << "color and sum: " << arr[i][j].second << " " << sum << endl;
            if(arr[i][j].second==0)
            {
                if(sum>maxi1)
                {
                    maxi1=sum;
                    x1=i+1, y1=j+1;
                }
            }
            if(arr[i][j].second==1)
            {
                if(sum>maxi2)
                {
                    maxi2=sum;
                    x2=i+1, y2=j+1;
                }
            }
        }
    }
    ll res=maxi1+maxi2;
    cout << res << endl;
    cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
	return 0;
}
