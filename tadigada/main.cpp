#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    map <int, vector<int> > m;
    for(int i=0; i<n; i++)
    {
        if(m.find(arr[i])==m.end())
        {
            m[arr[i]]= vector <int> ();
            m[arr[i]].push_back(i);
        }
        else
        {
            m[arr[i]].push_back(i);
        }
    }
    for(auto itr=m.begin(); itr!=m.end(); itr++)
    {
        cout << itr->first << " : " ;

        for(auto it = itr->second.begin(); it!=itr->second.end(); it++)
            cout << *it << " ";
        cout << endl;
    }
	return 0;
}
