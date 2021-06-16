#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, found=1;
        cin >> n;
        if(n<13)
            found=0;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }
        for(int i=0; i<n; i++)
        {
            if((v[i]>0)&&(v[i]<=7))
                continue;
            else
            {
                found=0;
                break;
            }
        }
        /*for(int i=0; i<n; i++)
            cout << v[i];*/
        int x=1, y=1;
        vector <int> :: iterator ib=v.begin();
        vector <int> :: iterator ie=v.end();
        ie--;
        vector <int> :: iterator ig=v.begin();
        ig--;
        for(int i=1; i<=6; i++)
        {
            int c1=0, c2=0;
            for(; ib!=v.end() ; ib++)
            {
               if(*ib==i)
               {
                    c1++;
                    continue;
               }
               else
               {
                   break;
               }
            }
            for(; ie!=ig ; ie--)
            {
               if(*ie==i)
                    {
                        c2++;
                        continue;
                    }
               else
               {
                   break;
               }
            }
            //cout << c1 << " " << c2 << endl;
            if((c1==c2)&&(c1!=0))
                {
                    continue;
                }
            else
            {
                found=0;
                break;
            }
        }
        if(found==1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
