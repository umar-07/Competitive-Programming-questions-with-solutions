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
        set <ll> s;
        int flag=0;
        for(int k=0; k<n; k++)
        {
            ll idx=k%n;
            if(arr[idx]<0)
            {
                arr[idx]=arr[idx]+n*1000000000;
            }
            ll p=k+arr[idx];
            ll num = p%n;
            if(s.find(num)!=s.end())
            {
                flag=1;
                break;
            }
            s.insert(num);
        }
        if(flag)
            cout << "NO" << endl;
        else
        {
            int j=0;
            for(auto it=s.begin(); it!=s.end(); it++)
                cout << *it << " ";
            cout << endl;
            for(auto it=s.begin(); it!=s.end(); it++)
            {
                if(*it!=j)
                {
                    flag=1;
                    break;
                }
                j++;
            }
            if(flag)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}
