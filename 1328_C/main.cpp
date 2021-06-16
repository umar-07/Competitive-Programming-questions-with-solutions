#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag=0;
        cin >> n;
        string s;
        cin >> s;
        vector <int> a;
        vector <int> b;
        for(int i=0 ; i<n; i++)
        {
            if(s[i]=='0')
            {
                a.push_back(0);
                b.push_back(0);
            }
            else if(s[i]=='1' && flag==0)
            {
                a.push_back(1);
                b.push_back(0);
                flag=1;
            }
            else if(s[i]=='1' && flag==1)
            {
                a.push_back(0);
                b.push_back(1);
            }
            else if(s[i]=='2' && flag==0)
            {
                a.push_back(1);
                b.push_back(1);
            }
            else if(s[i]=='2' && flag==1)
            {
                a.push_back(0);
                b.push_back(2);
            }
        }
        for(int i=0; i<a.size(); i++)
            cout << a[i];
        cout << endl;
        for(int i=0; i<b.size(); i++)
            cout << b[i];
        cout << endl;

    }
    return 0;
}
