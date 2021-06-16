#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int i;
        string a;
        cin>>a;
        map<int,int>mp;
        for(i=0;i<n;i++)
        {
            if(a[i]=='1')
                mp[i]++;
        }

        int ans=0;
        for(i=0;i<n;i++)
        {
            if(a[i]=='0')
            {
                if(mp.size()==0)
                {
                    ans++;
                    mp[i]++;
                    continue;
                }
                int l=INT_MIN,u=INT_MAX;

                auto it=mp.lower_bound(i);
                if(it!=mp.end())
                {
                    l=(it->first);
                }

                it=mp.upper_bound(i);
                if(it!=mp.begin())
                {
                    u=((--it)->first);
                }

                //cout<<i<<" : "<<l<<" "<<u<<endl;

                if((l>(i+k))&&(u<(i-k)))
                {
                    ans++;
                    mp[i]++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
