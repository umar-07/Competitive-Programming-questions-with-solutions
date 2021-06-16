#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;




int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll p[n];
        ll q[n];
       /* for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                p[i]=1;
        }
        ll j=0;
        ll num=0;
        ll r[n]={0};
        r[0]=p[0];*/
        p[0]=0;
        q[0]=0;
        //JOEY
        for(int i=1; i<n-1; i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            {
                p[i]=p[i-1]+1;
                q[i]=1;
                continue;
            }
            //BABY
            else
            {

            p[i]=p[i-1];
            q[i]=0;
            }
        }
        ll lim = k-2;

        q[n-1]=0;
        /*for(int i=1; i<n; i++)
        {
            if(i>=lim)
            {
                if(p[i]==1)
                    num++;
                if(p[i-lim]==1)
                    num--;
                r[i]=num;
            }
            else if(i<lim)
            {
                if(p[i]==1)
                    num++;
                r[i]=num;
            }
        }*/
        /*cout << "peaks" << endl;
        for(int i=0; i<n; i++)
            cout << p[i] << " ";
        cout << endl;
        cout << "RANGE" << endl;
        for(int i=0; i<n; i++)
            cout << r[i] << " ";
        cout << endl;*/
        ll idx=-1;
        p[n-1]=p[n-2];
        //ROSS
        /*for(int i=0; i<n; i++)
        {
            ll num = r[i];
            if(num>maxi)
            {
                maxi=num;
                idx=i;
            }
        }*/
         ll res = 0;
        for (int i=0; i<lim; i++)
            res += p[i];
        ll idx2=0;
        ll maxi2=-1;
        ll i=0;
        ll j;
    // Compute sums of remaining windows by
    // removing first element of previous
    // window and adding last element of
    // current window.
        ll curr_sum = res;
       idx=lim-1;
    for (int i=lim; i<n; i++)
    {
       curr_sum += arr[i] - arr[i-k];
       if(curr_sum>res)
       {
           res=curr_sum;
           idx=i;
       }
    }
    j=i+k-1;
    //CHANDLER
        while(j<=n-1)
        {
            ll po;
            if(i==0)
                po=p[j];
            else
                po=p[j]-p[i-1];

            ll kar_n;
            ll maxieee=0;
            //for()
            if(q[i]==1)
                po--;
            if(q[j]==1)
                po--;
            if(po>maxi2)
            {
                maxi2=po;
                idx2=i;
            }
            j++;
            i++;
        }
        ll maxi=res;
        //cout << "idx" << idx <<  endl;
        ll left_side=k-1;
        ll left_idx = idx-left_side+1;
        ll new_idx = left_idx+1;
        if(new_idx<1)
            new_idx=1;
        cout << maxi2+1 << " " << idx2+1 << endl;

    }
	return 0;
}
