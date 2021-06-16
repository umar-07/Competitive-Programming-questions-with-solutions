#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector <int> v;
    for(int i=0; i<s.size(); i++)
        v.push_back(s[i]-48);
    int z=-1;
    for(int i=0; i<s.size(); i++)
    {
        if(v[i]==0)
        {
            z=i;
            v.erase(v.begin()+i);
            break;
        }
    }
    if(z==-1)
    {
        for(int i=0; i<v.size()-1; i++)
            cout << v[i];
        cout << endl;
    }
    else
    {
        for(int i=0; i<v.size(); i++)
            cout << v[i];
        cout << endl;
    }
    return 0;
}
