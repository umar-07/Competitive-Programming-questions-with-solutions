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
        int l=s.size();
        char x[l], y[l];
        char f=s[0];
        char b=s[l-1];
        for(int i=0; i<l; i++)
        {
            if(s[i]=='.')
            {
                x[i]=f;
                continue;
            }
            else
            {
                if(s[i]=='A')
                    {
                        f='A';
                        x[i]=f;
                    }
                else
                    {
                        f='B';
                        x[i]=f;
                    }
            }
        }
        for(int i=l-1; i>=0; i--)
        {
            if(s[i]=='.')
            {
                y[i]=b;
                continue;
            }
            else
            {
                if(s[i]=='A')
                    {
                        b='A';
                        y[i]=b;
                    }
                else
                    {
                        b='B';
                        y[i]=b;
                    }
            }
        }
        int ca=0, cb=0;
        for(int i=0; i<l; i++)
        {
            if(x[i]==y[i])
            {
                if(x[i]=='A')
                    ca++;
                else
                    cb++;
            }
        }
        int flag=0;
        for(int i=0; i<l; i++)
        {
            if(s[i]=='.')
                continue;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout << ca << " " << cb << endl;
        else
            cout << "0" << " " << "0" << endl;
    }
    return 0;
}
