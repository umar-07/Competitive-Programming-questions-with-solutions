#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        int n, d;
        cin >> n >> d;
        string str[n];
        map <string, int> m;
        map <string, int> :: iterator itr;
        int c=1;
        for(int i=0; i<n; i++)
        {
            string s;
            cin >> s;
            str[i]=s;
            if(i==0)
            {
                m.insert(pair<string, int> (s,c));
                c++;
                continue;
            }
            if(m.find(s)==m.end())
            {
                m.insert(pair<string, int> (s,c));
                c++;
            }
        }
        if(m.size()==1)
            cout << "1" << endl;
        else
        {
            int maxi=2;
            for(int i=0; i<n-1; i++)
            {
                if(str[i]==str[i+1])
                    continue;
                else
                {
                    map <string, int> m2;
                    m.insert( pair <string, int> (str[i], 1));
                    int counti=1;
                    int x=d;
                    int j = i+1;
                    while(x--)
                    {
                        if(j==n)
                            break;
                        if(m2.find(str[j])== m2.end())
                        {
                            m2.insert(pair<string, int> (str[j], 1));
                            counti++;
                        }
                        j++;
                    }
                    if(counti>maxi)
                        maxi=counti;
                }
            }
            cout << maxi << endl;
        }
    }
    return 0;
}
