#include <bits/stdc++.h>

using namespace std;

bool isOperator(char a)
{
    if(a=='+')
        return true;
    else if(a=='*')
        return true;
    else if(a=='-')
        return true;
    else if(a=='/')
        return true;
    else if(a=='^')
        return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack <string> st1;
        stack <string> st2;
        for(int i=0; i<s.size(); i++)
        {
            string str(1, s[i]);
            if(isalpha(s[i]))
                st1.push(str);
            else if(isOperator(s[i]))
                st2.push(str);
            else if(s[i]=='(')
                st1.push(str);
            else if(s[i]==')')
            {
                string b = st1.top();
                st1.pop();
                string a = st1.top();
                st1.pop();
                string m = st2.top();
                st2.pop();
                st1.pop();
                a.append(b);
                a.append(m);
                st1.push(a);
            }
        }
        cout << st1.top() << endl;
    }
    return 0;
}
