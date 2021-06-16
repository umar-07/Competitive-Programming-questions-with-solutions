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
        ll p[n]={0};
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                p[i]=1;
        }
        ll j=0;
        ll num=0;
        ll r[n]={0};
        r[0]=p[0];
        for(int i=1; i<n; i++)
        {
            //cout << "i " << i << endl;
            //cout << "num: " << num << endl;
            if(i>=k)
            {
                //cout << "p[back] = " << p[i-k+1] << endl;
                if(p[i]==1)
                    num++;
                if(p[i-k+1]==1)
                {
                    //cout << "inside " << endl;
                    num--;
                    r[i]=num;
                    //cout << "num " << num << endl;
                    //cout << "r[i] " << r[i] << endl;
                    continue;
                }
                r[i]=num;
                continue;
            }
            else if(i<k)
            {
                r[i]=r[i-1]+p[i];
                num=r[i];
                j++;
                continue;
            }
        }
        /*cout << "peaks" << endl;
        for(int i=0; i<n; i++)
            cout << p[i] << " ";
        cout << endl;
        cout << "RANGE" << endl;
        for(int i=0; i<n; i++)
            cout << r[i] << " ";
        cout << endl;*/
        ll maxi=-1;
        ll idx=-1;
        for(int i=0; i<n; i++)
        {
            ll num = r[i];
            if(p[i]==1)
                num--;
            if(num>maxi)
            {
                maxi=num;
                idx=i;
            }
        }
        ll new_idx = idx-k+2;
        if(new_idx<1)
            new_idx=1;
        cout << maxi+1 << " " << new_idx << endl;

    }
	return 0;
}
