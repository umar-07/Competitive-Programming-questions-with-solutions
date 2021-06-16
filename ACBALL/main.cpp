#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t--)
    {
        string x, y, z, wi;
        cin >> x >> y;
        int l=x.size();
        for(int i=0; i<l; i++)
        {
            if(x[i]=='W')
            {
                wi[i]='B';
            }
            else if(x[i]=='B')
            {
                wi[i]='W';
            }
            if(y[i]=='W')
            {
                z[i]='W';
            }
            else if(y[i]=='B')
                z[i]='W';
        }
        int counti=0;
        for(int i=0; i<l; i++)
        {
            if(wi[i]<z[i])
            {
                counti=1;
                break;
            }
            else if(z[i]<wi[i])
            {
                counti=2;
                break;
            }
            else
                continue;
        }
        if(counti==1)
        {
            for(int i=0; i<l; i++)
                cout << wi[i];
        }
        else if(counti==2)
        {
            for(int i=0; i<l; i++)
                cout << z[i];
        }
        else if(counti==0)
        {
            for(int i=0; i<l; i++)
                cout << wi[i];
        }

    }
    return 0;
}
