#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;


//SOURCE: GFG : https://www.geeksforgeeks.org/shortest-path-unweighted-graph/

void add_edge(vector<ll> adj[], ll src, ll dest)
{
    adj[src].push_back(dest);
    adj[dest].push_back(src);
}

// a modified version of BFS that stores predecessor
// of each vertex in array p
// and its distance from source in array d
bool BFS(vector<ll> adj[], ll src, ll dest, ll v,
                            ll pred[], ll dist[])
{
    // a queue to maintain queue of vertices whose
    // adjacency list is to be scanned as per normal
    // DFS algorithm
    list<ll> queue;

    // boolean array visited[] which stores the
    // information whether ith vertex is reached
    // at least once in the Breadth first search
    bool visited[v];

    // initially all vertices are unvisited
    // so v[i] for all i is false
    // and as no path is yet constructed
    // dist[i] for all i set to infinity
    for (int i = 0; i < v; i++) {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }

    // now source is first to be visited and
    // distance from source to itself should be 0
    visited[src] = true;
    dist[src] = 0;
    queue.push_back(src);

    // standard BFS algorithm
    while (!queue.empty()) {
        int u = queue.front();
        queue.pop_front();
        for (int i = 0; i < adj[u].size(); i++) {
            if (visited[adj[u][i]] == false) {
                visited[adj[u][i]] = true;
                dist[adj[u][i]] = dist[u] + 1;
                pred[adj[u][i]] = u;
                queue.push_back(adj[u][i]);

                // We stop BFS when we find
                // destination.
                if (adj[u][i] == dest)
                   return true;
            }
        }
    }

    return false;
}

// utility function to print the shortest distance
// between source vertex and destination vertex
void printShortestDistance(vector<ll> adj[], ll s,
                                    ll dest, ll v)
{
    // predecessor[i] array stores predecessor of
    // i and distance array stores distance of i
    // from s
    ll pred[v], dist[v];

    if (BFS(adj, s, dest, v, pred, dist) == false)
    {
        cout << "Given source and destination"
             << " are not connected";
        return;
    }

    // vector path stores the shortest path
    vector<ll> path;
    ll crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

    // distance from source is in distance array
    cout << "Shortest path length is : "
        << dist[dest];

    // printing path from source to destination
    cout << "\nPath is::\n";
    for (int i = path.size() - 1; i >= 0; i--)
        cout << path[i] << " ";
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll t1 = n-1;
        vector <ll> adj[n];
        while(t1--)
        {
            ll x, y;
            cin >> x >> y;
            x--, y--;
            add_edge(adj, x, y);
        }
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll q;
        cin >> q;
        while(q--)
        {
            ll u, v;
            cin >> u >> v;
            u--;
            v--;
            if(u==v)
            {
                ll num=arr[u];
                map <ll, ll> m;
                    while(num%2==0)
                    {
                        if(m.find(2)==m.end())
                        {
                            m.insert(make_pair(2, 1));
                        }
                        else
                        {
                            m[2]=m[2]+1;
                        }
                        num=num/2;
                    }
                    for(int j=3; j<=sqrt(num); j=j+2)
                    {
                        while(num%j==0)
                        {
                            if(m.find(j)==m.end())
                            {
                                m.insert(make_pair(j, 1));
                            }
                            else
                            {
                                m[j]=m[j]+1;
                            }
                        }
                        num=num/j;
                    }
                    if(num>2)
                    {
                        if(m.find(num)==m.end())
                        {
                            m.insert(make_pair(num, 1));
                        }
                        else
                        {
                            m[num]=m[num]+1;
                        }
                    }
                    ll res=1;
                for(auto itr=m.begin(); itr!=m.end(); itr++)
                {
                    res = ((res%mod)*((itr->second+1)%mod))%mod;
                }
                cout << res << endl;
            }
            else
            {

                ll pred[n], dist[n];
                if (BFS(adj, u, v,n, pred, dist) == false)
                {
                    cout << "Given source and destination"
                        << " are not connected";
                    //return;
                }

                vector<ll> path;
                ll crawl = v;
                path.push_back(crawl);
                while (pred[crawl] != -1)
                {
                    path.push_back(pred[crawl]);
                    crawl = pred[crawl];
                }
                /*for(int i=0; i<path.size(); i++)
                    cout << path[i] << " ";
                cout << endl;*/
                map <ll, ll> m;
                for(int i=0; i<path.size(); i++)
                {
                    //cout << i << " ";
                    ll num = arr[path[i]];
                    //cout << "Number: ";
                    //cout << num << endl;
                    //cout << "Their Factor: " ;
                    while(num%2==0)
                    {
                        if(m.find(2)==m.end())
                        {
                            m.insert(make_pair(2, 1));
                        }
                        else
                        {
                            m[2]=m[2]+1;
                        }
                        //cout << "2 ";
                        num=num/2;
                    }
                    for(int j=3; j<=sqrt(num); j=j+2)
                    {
                        while(num%j==0)
                        {
                            if(m.find(j)==m.end())
                            {
                                m.insert(make_pair(j, 1));
                            }
                            else
                            {
                                m[j]=m[j]+1;
                            }
                            num=num/j;
                            //cout << j << " ";
                        }

                    }
                    if(num>2)
                    {
                        if(m.find(num)==m.end())
                        {
                            m.insert(make_pair(num, 1));
                        }
                        else
                        {
                            m[num]=m[num]+1;
                        }
                        //cout << num << " ";
                    }
                    //cout << endl;
                }
                //cout << "1";
                /*for(auto itr=m.begin(); itr!=m.end(); itr++)
                {
                    cout << itr->first << " " << itr->second << endl ;
                }*/
                ll res=1;
                for(auto itr=m.begin(); itr!=m.end(); itr++)
                {
                    res = ((res%mod)*((itr->second+1)%mod))%mod;
                }
                cout << res << endl;
            }
        }
    }
    return 0;
}
