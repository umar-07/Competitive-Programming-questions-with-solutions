#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


//SOURCE : GeeksForGeeks


bool BFS(vector<int> adj[], int src, int dest, int v,
         int pred[], int dist[])
{
    // a queue to maintain queue of vertices whose
    // adjacency list is to be scanned as per normal
    // DFS algorithm
    list<int> queue;

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



int calculate(int arr[],int n)
{
    int a[n];
    for(int i=0;i<n;i++)
    a[i]=arr[i];
    int sum=0;

        for(int i=0;i<n;i++)
        {
            int f=0;
            int mn=a[i],j=i,ind;
            for(int j=i+1;j<n;j++)
            {
                if(a[j]<mn)
                {
                    f=1;
                    ind=j;
                    mn=a[j];
                }
            }
            if(f==1)
            {
                sum++;
                int c=a[ind];
                a[ind]=a[i];
                a[i]=c;
            }
        }
        return sum;
}

// utility function to print the shortest distance
// between source vertex and destination vertex
vector <int> printShortestDistance(vector<int> adj[], int s,
                           int dest, int v)
{
    // predecessor[i] array stores predecessor of
    // i and distance array stores distance of i
    // from s
    int pred[v], dist[v];

    vector<int> path;
    if (BFS(adj, s, dest, v, pred, dist) == false) {
            return path;
    }

    // vector path stores the shortest path
    int crawl = dest;
    path.push_back(crawl);
    while (pred[crawl] != -1) {
        path.push_back(pred[crawl]);
        crawl = pred[crawl];
    }

    // distance from source is in distance array
    //cout << "Shortest path length is : "
     //    << dist[dest];

    // printing path from source to destination
    //cout << "\nPath is::\n";
    return path;
}


/*int minEdge(vector <int> g[], int a , int b, int n)
{
    vector <bool> vis(n+1,0);
    vector <int> dist(n+1,0);
    dist[a]=0;
    q.push(a);
    vis[a]=true;
    while(!q.empty())
    {
        int x = q.front();
        q.pop();
        for(int i=0; i<g[x].size(); i++)
        {
            if(vis[g[x][i])
                continue;
            dist[g[x][i]]=dist[x]+1;
            q.push(g[x][i]);
            vis[g[x][i]]=true;
        }
    }
    return dist[b];
}*/



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n+1];
        for(int i=1; i<n+1; i++)
            cin >> arr[i];
        vector <pair <int, int> > v;
        vector <int> adj[n+1];
        for(int i=0; i<m; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x,y});
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        //Direct Swapping
        int i=1;
        int flag=0;
        while(i<=n)
        {
            if(arr[i]==i)
            {
                i++;
                continue;
            }
            int s=i;
            int f=arr[i];
            vector <int> res = printShortestDistance(adj, s, f, n+1);
            if(res.size()==0)
            {
                i++;
                continue;
            }
            else
            {
                reverse(res.begin(), res.end());
                /*cout << "i " << i << endl;
                for(int i=0; i<res.size(); i++)
                    cout << res[i] << " ";
                cout << endl;*/
                for(int j=1; j<res.size(); j++)
                {
                    int temp=arr[res[j]];
                    arr[res[j]]=arr[res[j-1]];
                    arr[res[j-1]]=temp;
                }
                /*for(int i=1; i<=n; i++)
                    cout << arr[i] << " ";
                cout << endl;*/
            }
            i=1;
        }
        /*for(int i=1; i<=n; i++)
            cout << arr[i] << " ";
        cout << endl;*/
        i=1;
        ll sum=0;
        while(i<=n)
        {
            if(arr[i]==i)
            {
                i++;
                continue;
            }
            int flag=0;
            for(int j=1; j<=n; j++)
            {
                if(flag==1)
                    break;
                if(i==j || arr[j]==j)
                    continue;
                int s1=j;
                int d1=arr[i];
                int s2=i;
                int d2=arr[j];
                vector <int> p1 = printShortestDistance(adj, s1, d1, n+1);
                vector <int> p2 = printShortestDistance(adj, s2, d2, n+1);
                if(p1.size()==0 || p2.size()==0)
                    continue;
                else
                {
                    int remp = arr[j];
                    arr[j]=arr[i];
                    arr[i]=remp;
                    reverse(p1.begin(), p1.end());
                    for(int k=1; k<p1.size(); k++)
                    {
                        int temp=arr[p1[k]];
                        arr[p1[k]]=arr[p1[k-1]];
                        arr[p1[k-1]]=temp;
                    }
                    reverse(p2.begin(), p2.end());
                    for(int k=1; k<p2.size(); k++)
                    {
                        int temp=arr[p2[k]];
                        arr[p2[k]]=arr[p2[k-1]];
                        arr[p2[k-1]]=temp;
                    }
                    sum++;
                    flag=1;
                }
            }
            if(flag==0)
            {
                i++;
                continue;
            }
            else
            {
                i=0;
            }
        }
        vector < pair < int,int > > p;


        int a[n];

        int j=1;
        for(int i=0 ; i<n ;i++)
        {
            a[arr[j]-1]=i+1;
            j++;
        }
        ll res = calculate(a,n);
        sum+=res;
        cout << sum << endl;
    }
	return 0;
}
