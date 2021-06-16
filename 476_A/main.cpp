#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
     int n, m;
        cin >> n >> m;
        int sum=0;
        int two=0, one=0;
        if(m>n)
            cout << "-1" << endl;
        else
        {
            int flag=0;
            int i=n;
            while(i>0)
            {
                if(i%2!=0)
                {
                    one+=1;
                    i--;
                    two=i/2;
                    sum=one+two;
                    if(sum%m==0)
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    two=i/2;
                    sum=one+two;
                    if(sum%m==0)
                    {
                        flag=1;
                        break;
                    }
                    else
                    {
                        i--;
                        one+=1;
                        continue;
                    }
                }
            }
            //cout << two << "   "  << one << endl;
            if(flag==1)
                cout << sum << endl;
            else
                cout << "-1" << endl;
        }

    return 0;
}
