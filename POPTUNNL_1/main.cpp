#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int graph[n][n]={0};
        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            for(int j=0; j<n; j++)
            {
                if(s[j]==1 && abs(i-j)<=k)
                    graph[i][j]=1;
            }
        }
        int distance[n]={0};
        //for(int i=0; i<n; i++)
        //    distance[i]=INT_MAX;
        distance[0] = 0;
        deque <int> q;
        q.push_back(0);
        while(!q.empty())
        {
            int v = q.front();
            q.pop_front();
            for(int i=0; i<n; i++)
            {
                if(graph[v][i]!=0)
                {
                    if(distance[i] > distance[v] + 1)
                    {
                        distance[i] = distance[v] + 1;
                        q.push_front(i);
                    }
                }
            }
        }
        if(distance[n-1]!=INT_MAX)
            cout << distance[n-1] << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
