#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        stack <char> s;
        ll c=0;
        ll f=0, b=0;
        for(int i=0; i<str.size(); i++)
        {
            if(b>f)
                break;
            if(str[i]=='<')
                f++;
            else if(str[i]=='>')
                b++;
            if(f==b)
            {
                if(2*f >= c)
                    c=2*f;
            }
        }
        cout << c << endl;
    }
    return 0;
}
