#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector <char> step;
    int s[k][2];
    int f[k][2];
    int d[k][2];
    for(int i=0; i<n; i++)
        cin >> s[i][0] >> s[i][1];
    for(int i=0; i<n; i++)
        cin >> f[i][0] >> f[i][1];
    for(int i=0; i<n; i++)
    {
        d[i][0] = f[i][0]-s[i][0];
        d[i][1] = f[i][1]-s[i][1];
    }
    vector < pair <int, int> > v1;
    vector < pair <int, int> > v2;
    for(int i=0; i<n; i++)
    {
        if(d[i][0]>=0 && d[i][1]>=0)
            v1.push_back(make_pair(d[i][0], d[i][1]));
        else if(d[i][0]>=0 && d[i][1]<=0)
            v1.push_back(make_pair(d[i][0],(d[i][1])));
        else if(d[i][0]<=0 && d[i][1]>=0)
            v2.push_back(make_pair(abs(d[i][0]), d[i][1]));
        else
            v2.push_back(make_pair(abs(d[i][0]), (d[i][1])));
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if(v1.size()>0)
    {
        for(int i=0; i<v1[0].first; i++)
            step.push_back('D');
        if(v1[0].second>=0)
        {
            for(int i=0; i<v1[0].second; i++)
                step.push_back('R');
        }
        else
        {
            for(int i=0; i<v1[0].second; i++)
                step.push_back('L');
        }
    }
    for(int i=0; i<v1.size()-1; i++)
    {
        int p = v1[i].first;
    }
    return 0;
}
