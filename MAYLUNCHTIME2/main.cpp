#include <iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l;
        string arr;
        cin >> arr;
        l=arr.size();
        //cout << l << endl;
        string cop=arr;
        int a[l];
        for(int i=0; i<l; i++)
            a[i]=1;
        //cout << cop << endl;
        int c=0;
        if(l%2==0)
        {
            for(int i=0; i<l; i++)
            {
                if(a[i]==0)
                {
                    continue;
                }
                else
                {
                    int counti=1;
                    for(int j=i+1; j<l; j++)
                    {
                        if(cop[i]==cop[j])
                        {
                            counti++;
                            a[j]=0;
                        }
                    }
                    if(counti%2==0)
                        continue;
                    else
                    {
                     c++;
                     continue;
                    }
                }
            }
            if((c>2)||(c==0))
                cout << "!DPS" << endl;
            else
                cout << "DPS" << endl;
        }
        else
        {
            if((l==3)&&(((cop[0]!=cop[1])&&(cop[1]!=cop[2])&&(cop[0]!=cop[2]))||((cop[0]==cop[1])&&(cop[1]==cop[2])&&(cop[0]==cop[2]))))
            {
                cout << "DPS" << endl;
            }
            else
            {
                for(int i=0; i<l; i++)
                {
                    if(a[i]==0)
                    {
                        continue;
                    }
                    else
                    {
                        int counti=1;
                        for(int j=i+1; j<l; j++)
                        {
                            if(cop[i]==cop[j])
                            {
                                counti++;
                                a[j]=0;
                            }
                        }
                        if(counti%2==0)
                            continue;
                        else
                        {
                         c++;
                         continue;
                        }
                    }
                }
                if((c==1)||(l!=3))
                    cout << "DPS" << endl;
                else
                    cout << "!DPS" << endl;
            }
        }
    }
    return 0;
}
