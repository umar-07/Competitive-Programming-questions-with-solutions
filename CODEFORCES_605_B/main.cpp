#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int u=0, d=0, l=0, r=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='L')
                l++;
            else if(s[i]=='R')
                r++;
        }
        if(u>d)
        {
            u=d;
        }
        else
        {
            d=u;
        }
        if(l>r)
        {
            l=r;
        }
        else
        {
            r=l;
        }
        if(l+r ==0)
        {
            if(u==0)
                cout << "0" << endl << endl;
            if(d>0)
            {
                cout << "2" << endl;
                cout << "UD" << endl;
            }
        }
        else if((u+d)==0)
        {
            if(l==0)
                cout << "0" << endl << endl;
            if(l>0)
                {
                    cout << "2" << endl;
                    cout << "LR" << endl;
                }
        }
        else
        {
            cout << (l+r+u+d) << endl;
            for(int i=0; i<u; i++)
                cout << "U";
            for(int i=0; i<r; i++)
                cout << "R";
            for(int i=0; i<d; i++)
                cout << "D";
            for(int i=0; i<l; i++)
                cout << "L";
            cout << endl;
        }
    }
    return 0;
}
