#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int n=str.size();
        int c=-1, e=-1, s=-1;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='E')
                e=i;
            else if(str[i]=='S')
                s=i;
            else if(str[i]=='C')
                c=i;
        }
        //cout << c << " " << e << " " << s << endl;
        int flag=0;
        if((c==-1)||(e==-1)||(s==-1))
        {
            if((c==-1)&&(s==-1))
            {
                flag=0;
            }
            else if((c==-1)&&(e==-1))
            {
                flag=0;
            }
            else if((e==-1)&&(s==-1))
            {
                flag=0;
            }
            else if(c==-1)
            {
                if(e>s)
                    flag=1;
            }
            else if(s==-1)
            {
                if(c>e)
                    flag=1;
            }
            else if(e==-1)
            {
                if(c>s)
                    flag=1;
            }
        }
        if((flag==0)&&(c!=-1)&&(e!=-1)&&(s!=-1))
        {
            if((s>e)&&(e>c))
                flag=0;
            else
                flag=1;
        }
        if(flag==0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
