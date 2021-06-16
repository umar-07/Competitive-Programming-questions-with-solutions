#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n>> m;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        map <int, set <int> > g;
        for(int i=0; i<n; i++)
        {
            auto pr = g.insert(make_pair(i%m, std::set<int>()));
            pr.first->second.insert(arr[i]);
        }
        /*for(auto i= g.begin(); i!=g.end(); i++)
        {
            cout << i->first << " ";
            set <int> &s = i->second;
            for(auto i = s.begin(); i!=s.end(); i++)
                cout << *i << " ";
            cout << endl;
        }*/
        int mini = INT_MAX;
        for(auto i= g.begin(); i!=g.end(); i++)
        {
            set <int> &s = i->second;
            auto k = s.begin();
            int a = *k;
            for(auto j = g.begin(); j!=g.end(); j++)
                {
                    if(i==j)
                        continue;
                    set <int> &op = j->second;
                    auto l = op.rbegin();
                    int b = *l;
                    if((b-a)<mini)
                    {
                        mini=b-a;
                        if(mini<0)
                            mini=mini*(-1);
                    }
                }
        }
        cout << mini << endl;
    }
    return 0;
}
