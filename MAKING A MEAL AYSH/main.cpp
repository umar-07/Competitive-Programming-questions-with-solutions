#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t,n,i,j;
    string s[1000];

    int c,o,d,e,f,h,mn,no;

    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>s[i];

        c=0;o=0;d=0;e=0;h=0;f=0;

        for(i=0;i<n;i++)
            for(j=0;j<s[i].length();j++)
            {
                if(s[i].at(j)=='c')
                    c++;
                if(s[i].at(j)=='o')
                    o++;
                if(s[i].at(j)=='d')
                    d++;
                if(s[i].at(j)=='e')
                    e++;
                if(s[i].at(j)=='h')
                    h++;
                if(s[i].at(j)=='f')
                    f++;
            }

        if((c/2!=0)&&(e/2!=0)&&(d>0)&&(o>0)&&(h>0)&&(f>0))
        {
          mn=min(c,e);
          no=mn/2;
          //if((o>=no-1)&&(d>=no-1)&&(h>=no-1)&&(f>=no-1))
            //    cout<<mn/2<<endl;
         no=min(no,o);
         no=min(no,d);
         no=min(no,f);
         no=min(no,h);
         cout << no << endl;
        }
        else
            cout<<"0"<<endl;

    }


    return 0;
}
