#include <bits/stdc++.h>

using namespace std;

string lex(string s)
{
    if(s.size()%2==1)
        return s;
    string s1 = lex(s.substr(0,s.size()/2));
    string s2 = lex(s.substr(s.size()/2, s.size()));
    if(s1 < s2)
        return s1+s2;
    return s2+s1;
}


int main()
{
    string a, b;
    cin >> a >> b;
    string str1 = lex(a);
    string str2 = lex(b);
    if(str1==str2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
