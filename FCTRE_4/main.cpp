#include <bits/stdc++.h>
#define ll long long int
#define mod 1000000007
using namespace std;


//SOURCE: GFG : https://www.geeksforgeeks.org/shortest-path-unweighted-graph/
//SOURCE 2: GFG : https://www.geeksforgeeks.org/prime-factorization-using-sieve-olog-n-multiple-queries/

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
    int maxi=1000001;
    int spf[maxi];
    spf[1] = 1;
    for (int i=2; i<maxi; i++)
        spf[i] = i;
    for (int i=4; i<maxi; i+=2)
        spf[i] = 2;
    for (int i=3; i*i<maxi; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (int j=i*i; j<maxi; j+=i)
            {
                if (spf[j]==j)
                    spf[j] = i;
            }
        }
    }
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
        unordered_map <ll, ll> st[n];
        for(int i=0; i<n; i++)
        {
            ll num = arr[i];
            while(num!=1)
            {
                st[i][spf[num]]=st[i][spf[num]]+1;
                num=num/spf[num];
            }
        }
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
                unordered_map <ll, ll> m;
                for(auto itr=st[u].begin(); itr!=st[u].end(); itr++)
                    {
                        m[itr->first]=m[itr->first]+ (itr->second);
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
                unordered_map <ll, ll> m;
                ll crawl = v;
                path.push_back(crawl);
                for(auto itr=st[crawl].begin(); itr!=st[crawl].end(); itr++)
                {
                    m[itr->first]=m[itr->first]+ (itr->second);
                }
                while (pred[crawl] != -1)
                {
                    path.push_back(pred[crawl]);
                    for(auto itr=st[pred[crawl]].begin(); itr!=st[pred[crawl]].end(); itr++)
                    {
                        m[itr->first]=m[itr->first]+ (itr->second);
                    }
                    crawl = pred[crawl];
                }
                /*for(int i=0; i<path.size(); i++)
                    cout << path[i] << " ";
                cout << endl;*/
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
