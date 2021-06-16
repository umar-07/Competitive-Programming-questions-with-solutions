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
        int n, q;
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
            //cout << "d" << endl;
            for(int j=31; j>=0; j--)
            {
                int k = x >> j;
                if(k&1)
                {
                    b[i].push_back(1);
                }
                else
                    b[i].push_back(0);
                //cout << "f";
            }
        }
        //cout << "1";
        for(int i=0; i<n; i++)
        {
            reverse(b[i].begin(), b[i].end());
        }
        /*for(int i=0; i<n; i++)
        {
            for(ptr=b[i].begin(); ptr!=b[i].end(); ptr++)
                cout << *ptr;
            cout << endl;
        }*/
        while(q--)
        {
            ios_base :: sync_with_stdio(false);
            cin.tie(NULL);
            ll e=0, o=0;
            ll p;
            cin >> p;
            ll temp = p;
            vector <int> pb;
            for(int i=31; i>=0; i--)
            {
                int k = temp >> i;
                if(k&1)
                    pb.push_back(1);
                else
                    pb.push_back(0);
            }
            reverse(pb.begin(), pb.end());
            int d[32]={0};
            int g=0;
            for(ptr=pb.begin(); ptr!=pb.end(); ptr++)
            {
                if(g==32)
                    break;
                d[g]=*ptr;
                g++;
            }
            for(int i=0; i<n; i++)
            {
                int res[32]={0};
                ptr=b[i].begin();
                int j=0;
                while(j<32 && ptr!=b[i].end())
                {
                    if(d[j]==0 && *ptr==0)
                        res[j]=0;
                    else if(d[j]==0 && *ptr==1)
                        res[j]=1;
                    else if(d[j]==1 && *ptr==0)
                        res[j]=1;
                    else
                        res[j]=0;
                    j++;
                    ptr++;
                }
                ll one=0;
                for(int i=0; i<32; i++)
                {
                    if(res[i]==1)
                        one++;
                }
                if(one%2==0)
                    e++;
                else
                    o++;
            }
            cout << e << " " << o << endl;
        }
    }
    return 0;
}
