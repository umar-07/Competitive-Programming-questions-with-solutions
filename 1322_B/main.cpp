#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int m=0;
        int num[11]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
        vector < pair <int, int> > v[11];
        int mark[n]={0};
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<11; j++)
            {
                if(arr[i]%num[j]==0)
                {
                    v[j].push_back(make_pair(arr[i], i));
                    break;
                }
            }
        }
        vector <pair <int, int> > res[11];
        for(int i=0; i<11; i++)
        {
            if(v[i].size()>0)
            {
                for(int j=0; j<v[i].size(); j++)
                {
                    res[m].push_back(v[i][j]);
                }
                m++;
            }
        }
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<res[i].size(); j++)
            {
                mark[res[i][j].second]=i+1;
            }
        }
        cout << m << endl;
        for(int i=0; i<n; i++)
            cout << mark[i] << " ";
        cout << endl;
    }
    return 0;
}
