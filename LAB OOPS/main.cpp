#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <string> s;
    vector <string> :: iterator itr;
    int n;
    cout << "Enter Number of lines of codes" << endl;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string str;
        cin >> str;
        s.push_back(str);
    }
    int tab=0;
    vector <string> s2;
    for(itr=s.begin(); itr!=s.end(); itr++)
    {
        string str = (*itr);
        if(str[0]=='}')
            tab-=4;
        string str1(tab, ' ');
        str1.append(str);
        if(str[0]=='{')
            tab+=4;
        s2.push_back(str1);
    }
    vector <string> :: iterator itr1;
    for(itr1=s2.begin(); itr1!=s2.end(); itr1++)
        cout << (*itr1) << endl;
    return 0;
}
