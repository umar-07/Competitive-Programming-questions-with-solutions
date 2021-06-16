#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    pair <int, int> arr[n-1];
    int h[n+1]={0};
    for(int i=0; i<n-1; i++)
    {
        int t1, t2;
        cin >>t1 >> t2;
        arr[i]=make_pair(t1, t2);
        h[t1]++;
        h[t2]++;
    }
    int root=-1;
    for(int i=1; i<=n; i++)
    {
        if(h[i]>2)
        {
            root=i;
            break;
        }
    }
    if(root==-1)
    {
        for(int i=0; i<=n-2; i++)
            cout << i << endl;
    }
    else
    {
        vector <int> v;
        for(int i=0; i<n-1; i++)
            v.push_back(i);
        int res[n-1];
        for(int i=0; i<n-1; i++)
            res[i]=-1;
        int j=0;
        for(int i=0; i<n-1; i++)
        {
            if(j==3)
                break;
            if(arr[i].first==root || arr[i].second==root)
            {
                res[i]=j;
                j++;
            }
        }
        j=3;
        for(int i=0; i<=n-2; i++)
        {
            if(res[i]==-1)
            {
                res[i]=j;
                j++;
                continue;
            }
            else
                continue;
        }
        for(int i=0; i<n-1; i++)
            cout << res[i] << endl;
    }
    return 0;
}
