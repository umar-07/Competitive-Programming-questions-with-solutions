#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int w=0, b=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='W')
            w++;
        else
            b++;
    }
    if((w==0)||(b==0))
        cout << "0" << endl;
    else if((w%2!=0)&&(b%2!=0))
        cout << "-1" << endl;
    else
    {
        vector <int> v;
        if(b>w)
        {
            for(int i=0; i<n-1; i++)
            {
                if(s[i]=='B')
                {
                    if(s[i+1]=='B')
                    {
                        v.push_back(i);
                        s[i]='W';
                        s[i+1]='W';
                    }
                    else
                    {
                        v.push_back(i);
                        s[i]='W';
                        s[i+1]='B';
                    }
                }
            }
        }
        else
        {
            for(int i=0; i<n-1; i++)
            {
                if(s[i]=='W')
                {
                    if(s[i+1]=='W')
                    {
                        v.push_back(i);
                        s[i]='B';
                        s[i+1]='B';
                    }
                    else
                    {
                        v.push_back(i);
                        s[i]='B';
                        s[i+1]='W';
                    }
                }
            }
        }
        cout << v.size() << endl;
        vector <int> :: iterator itr;
        for(itr=v.begin(); itr!=v.end(); itr++)
            cout << (*itr)+1 << " ";
    }
    return 0;
}
