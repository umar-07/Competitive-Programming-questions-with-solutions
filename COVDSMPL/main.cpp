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
    cout << a << " " << b << " " << c << " " << d << endl;
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

        //HOW TO SOLVE?

        //  2X2
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i][j]==0)
                    continue;
                if(arr[i][j]==1)
                    continue;
                if(i+1<n && j+1<n)
                {
                    ll x =ask(i+1, j+1, i+2, j+2);
                    if(x==4)
                    {
                        arr[i][j]=1;
                        arr[i][j+1]=1;
                        arr[i+1][j]=1;
                        arr[i+1][j+1]=1;
                        continue;
                    }
                    else if(x==0)
                    {
                        arr[i][j]=0;
                        arr[i][j+1]=0;
                        arr[i+1][j]=0;
                        arr[i+1][j+1]=0;
                        continue;
                    }
                }
            }
        }

        // Simple
        for(int i=0; i<n-1; i++)
        {
            if(flag==1)
                break;
            for(int j=0; j<n-1; j++)
            {
                if(arr[i][j]==0 || arr[i][j]==1)
                    continue;
                ll x=ask(i+1, j+1, i+1, j+2);
                if(x==-1)
                {
                    flag=1;
                    break;
                }
                else if(x==0)
                {
                    arr[i][j]=0;
                    arr[i][j+1]=0;
                    j++;
                    continue;
                }
                else if(x==2)
                {
                    arr[i][j]=1;
                    arr[i][j+1]=1;
                    j++;
                    continue;
                }
                else if(x==1)
                {
                    ll u=ask(i+1, j+1, i+1, j+1);
                    if(u==1)
                    {
                        arr[i][j]=1;
                        arr[i][j+1]=0;
                        j++;
                        continue;
                    }
                    else
                    {
                        arr[i][j]=0;
                        arr[i][j+1]=1;
                        j++;
                        continue;
                    }
                }
            }
        }

        //Last column

        for(int i=0; i<n-1; i++)
        {
            if(arr[i][n-1]!=-1)
                continue;
            ll x=ask(i+1, n, i+2, n);
            if(x==0)
            {
                arr[i][n-1]=0;
                arr[i+1][n-1]=0;
                i++;
                continue;
            }
            else if(x==2)
            {
                arr[i][n-1]=1;
                arr[i+1][n-1]=1;
                i++;
                continue;
            }
            else if(x==1)
            {
                ll u = ask(i+1, n, i+1, n);
                if(u==1)
                {
                    arr[i][n-1]=1;
                    arr[i+1][n-1]=0;
                    i++;
                    continue;
                }
                else if(u==0)
                {
                    arr[i][n-1]=0;
                    arr[i+1][n-1]=1;
                    i++;
                    continue;
                }
            }
        }
        //Last Row

        for(int i=0; i<n-1; i++)
        {
            if(arr[n-1][i]!=-1)
                continue;
            ll x=ask(n, i+1, n, i+2);
            if(x==0)
            {
                arr[n-1][i]=0;
                arr[n-1][i+1]=0;
                i++;
                continue;
            }
            else if(x==2)
            {
                arr[n-1][i]=1;
                arr[n-1][i+1]=1;
                i++;
                continue;
            }
            else if(x==1)
            {
                ll u = ask(n, i+1, n, i+1);
                if(u==1)
                {
                    arr[n-1][i]=1;
                    arr[n-1][i+1]=0;
                    i++;
                    continue;
                }
                else if(u==0)
                {
                    arr[n-1][i]=0;
                    arr[n-1][i+1]=1;
                    i++;
                    continue;
                }
            }
        }
        //All Leftovers:

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i][j]==0)
                    continue;
                if(arr[i][j]==1)
                    continue;
                else
                {
                    ll x=ask(i+1, j+1, i+1, j+1);
                    if(x==1)
                        arr[i][j]=1;
                    else
                        arr[i][j]=0;
                }
            }
        }
        //Solution Ends

        cout << "2" << endl;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
                cout << arr[i][j] << " ";
            cout << endl;
        }
        ll k;
        cin >> k;
        if(k==-1 || flag==1)
        {
            break;
        }
        if(k==1)
            continue;
    }
	return 0;
}
