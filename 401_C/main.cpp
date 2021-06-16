#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{

        ll n, m;
        cin >> n >> m;
        if(n>m+1 || m > 2*n+2)
            cout << "-1" << endl;
        else
        {
            if(n==m)
            {
                for(int i=0; i<2*n; i++)
                {
                    if(i%2==0)
                        cout << "0";
                    else
                        cout << "1";
                }
                cout << endl;
            }
            else if(n>m)
            {
                int k = n+m;
                for(int i=0; i<k; i++)
                {
                    if(i%2==0)
                        cout << "0";
                    else
                        cout << "1";
                }
                cout << endl;
            }
            else
            {
                int k = m+n;
                string str;
                while(abs(m-n)>1)
                {
                    str.push_back('1');
                    str.push_back('1');
                    if(n!=0)
                        str.push_back('0');
                    m=m-2;
                    if(n!=0)
                        n=n-1;
                }

                {
                    int op = m+n;
                    for(int i=0; i<op; i++)
                    {
                       // cout << "i: " << i << endl;
                        if(i%2==0)
                            str.push_back('1');
                        else
                            str.push_back('0');
                    }
                }
                cout << str << endl;
            }
        }

    return 0;
}
