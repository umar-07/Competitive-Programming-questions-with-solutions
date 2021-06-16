#include <bits/stdc++.h>

using namespace std;

#define INF INT_MAX


int shortestPath(int *graph, int u, int v, int k)
{
    int Graph[k+1][k+1];
    for(int i=0; i<=k; i++)
    {
        for(int j=0; j<=k; j++)
        {
            Graph[i][j]= *((graph+i*k) + j));
        }
    }
   // Base cases
   if (k == 0 && u == v)             return 0;
   if (k == 1 && graph[u][v] != INF) return graph[u][v];
   if (k <= 0)                       return INF;

   // Initialize result
   int res = INF;

   // Go to all adjacents of u and recur
   for (int i = 0; i < V; i++)
   {
       if (graph[u][i] != INF && u != i && v != i)
       {
           int rec_res = shortestPath(graph, i, v, k-1);
           if (rec_res != INF)
              res = min(res, graph[u][i] + rec_res);
       }
   }
   return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s[n];
        for(int i=0; i<n; i++)
        {
            cin >> s[i];
        }
        map <int, vector <int> > m;
        map <int, vector <int> > :: iterator itr;
        for(int i=0; i<n; i++)
        {
            string str = s[i];
            for(int j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                if(abs(i-j)>k)
                    continue;
                if(str[j]=='1')
                {
                    auto pr= m.insert( make_pair(i+1, vector <int> () ) );
                    pr.first->second.push_back(j+1);
                }
            }
        }
        /*for(itr=m.begin(); itr!=m.end(); itr++)
        {
            cout << itr->first << "--> ";
            vector <int> :: iterator itr1;
            for(itr1=itr->second.begin(); itr1!=itr->second.end(); itr1++)
            {
                cout << (*itr1) << " ";
            }
            cout << endl;
        }*/
        int G[n+1][n+1]={INF};

        for(itr=m.begin(); itr!=m.end(); itr++)
        {
            //cout << itr->first << "--> ";
            vector <int> :: iterator itr1;
            for(itr1=itr->second.begin(); itr1!=itr->second.end(); itr1++)
            {
                G[itr->fisrt][(*itr1)]=1;
                //cout << (*itr1) << " ";
            }
            //cout << endl;
        }
        int u=1;
        int v=n;
        int po = shortestPath((int *)G, u, v, n);
        if(po== INF)
            cout << "-1" << endl;
        else
            cout << po << endl;
    }
    return 0;
}
