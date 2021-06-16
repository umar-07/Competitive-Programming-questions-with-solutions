#include <bits/stdc++.h>

#define ll long long int

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
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
        int c[32]={0};
        for(int i=0; i<n; i++)
        {
            int idx=0;
            for(ptr=b[i].begin(); ptr!=b[i].end(); ptr++)
            {
                if(*ptr == 1)
                    c[idx]++;
                idx++;
            }
        }
        while(q--)
        {
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
            int i=0;
            for(ptr=pb.begin(); ptr!=pb.end(); ptr++)
            {
                d[i]=*ptr;
                i++;
            }

        }
    }
    return 0;
}
