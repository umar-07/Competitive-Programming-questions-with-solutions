#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int age[3];
        int m[3];
        for(int i=0; i<3; i++)
        {
            cin >> age[i];
        }
        for(int i=0; i<3; i++)
            cin >> m[i];
        int b[3];
        for(int i=0; i<3; i++)
            b[i]=age[i];
        sort(b, b+3);
        int flag=0;
        int c[3];
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
            {
                if(b[i]==age[j])
                {
                    c[i]=m[j];
                    age[j]=-1;
                    break;
                }
            }
        }
        int s[3];
        for(int i=0; i<3; i++)
        {
            s[i]=c[i];
        }
        sort(s, s+3);
        for(int i=0; i<3; i++)
        {
            if(c[i]!=s[i])
            {
                flag=1;
                break;
            }
        }
        /*for(int i=0; i<3; i++)
            cout << b[i] << " ";
        cout << endl;
        for(int i=0; i<3; i++)
            cout << c[i] << " ";
        cout << endl;*/
        if(flag==0)
        {
            for(int i=0; i<3; i++)
            {
                for(int j=0; j<3; j++)
                {
                    if(b[i]==b[j])
                    {
                        if(c[i]==c[j])
                            continue;
                        else
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                        break;
                }
            }
        }
        if(flag==0)
        {
            for(int i=0; i<2; i++)
            {
                if(b[i]<b[i+1])
                {
                    if(c[i]>=c[i+1])
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                    break;
            }
        }
        if(flag==0)
            cout << "FAIR" << endl;
        else
            cout << "NOT FAIR" << endl;
    }
    return 0;
}
