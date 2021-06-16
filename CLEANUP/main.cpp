#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[m];
        for(int i=0; i<m; i++)
            cin >> arr[i];
        sort(arr, arr+m);
        vector <int> job;
        for(int i=1; i<=n; i++)
            job.push_back(i);
        for(int i=0; i<m; i++)
        {
            vector <int> :: iterator itr = find(job.begin(), job.end(), arr[i]);
            if(itr!=job.end())
            {
                job.erase(itr);
            }
        }
        vector <int> chef;
        vector <int> assistant;
        for(int i=0; i<job.size(); i++)
        {
            if(i%2==0)
                chef.push_back(job[i]);
            else
                assistant.push_back(job[i]);
        }
        for(int i=0; i<chef.size(); i++)
            cout << chef[i] << " ";
        cout << endl;
        for(int i=0; i<assistant.size(); i++)
            cout << assistant[i] << " ";
        cout << endl;
    }
    return 0;
}
