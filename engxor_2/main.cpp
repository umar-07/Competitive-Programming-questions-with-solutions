#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        vector <int> b[n];
        vector <int> :: iterator ptr;
        for(int i=0; i<n; i++)
        {
            ll x;
            x=arr[i];
            for(int j=31; j>=0; j--)
            {
                int k = x >> j;
                if(k&1)
                {
                    b[i].push_back(1);
                }
                else
                    b[i].push_back(0);
            }
        }
        ll even=0, odd=0;
        for(int i=0; i<n; i++)
        {
            ll counti=0;
            for(ptr=b[i].begin(); ptr!=b[i].end(); ptr++)
            {
                if(*ptr==1)
                    counti++;
            }
            if(counti%2==0)
                even++;
            else
                odd++;
        }
        while(q--)
        {
            ll p;
            cin >> p;
            ll m=p;
            int d[32]={0};
            int i=0;
            int cu=0;
            for(int j=31; j>=0; j--)
            {
                int k = m >> j;
                if(k&1)
                {
                    d[i]=1;
                    cu++;
                }
                else
                    d[i]=0;
                i++;
            }
            if(cu%2==0)
            {
                cout << even << " " << odd << endl;
            }
            else
                cout << odd << " " << even << endl;
        }
    }
    return 0;
}
