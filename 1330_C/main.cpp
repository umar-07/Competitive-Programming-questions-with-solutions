#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[m];
    for(int i=0; i<m; i++)
        cin >> arr[i];
    pair <int, int> a[m];
    for(int i=0; i<m; i++)
    {
        int k = arr[i];
        int j = n-k+1;
        a[i]=make_pair(j,k);
    }
    sort(a, a+m);
    vector <pair <int, int> > v;
    vector <int> p;
    int st = a[0].second+1;
    v.push_back(make_pair(1,a[0].second));
    p.push_back(1);
    for(int i=1; i<m; i++)
    {
        if(st<=a[i].first)
        {
            v.push_back(make_pair(st, st+a[i].second-1));
            p.push_back(st);
            st=st+a[i].second;
        }
        else
        {
            int c = a[i].first + a[i].second -1;
            if(c<=st)
            {
                p.push_back(a[i].first);
                continue;
            }
            else
            {
                v.push_back(make_pair(st, c));
                p.push_back(a[i].first);
                st=c+1;
            }
        }
    }
    int flag=0, res=0;
    sort(v.begin(), v.end());
    for(int i=0; i<v.size()-1; i++)
    {
        if(v[i].second+1 < v[i+1].first)
        {
            flag=1;
            break;
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        if(v[i].first<=n && v[i].second>=n)
            res=1;
    }
    if(flag==1 || res==0)
        cout << "-1" << endl;
    else
    {
        for(int i=0; i<p.size(); i++)
            cout << p[i] << " ";
        cout << endl;
    }
    return 0;
}
