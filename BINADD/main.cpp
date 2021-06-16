#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.size();
        int m = b.size();
        int nz=0;
        for(int i=0; i<m; i++)
        {
            int k = b[i]-48;
            if(k==1)
            {
                nz=1;
                break;
            }
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if(n>m)
        {
            for(int i=0; i<(n-m); i++)
                b.append("0");
        }
        else if(m>n)
        {
            for(int i=0; i<(m-n); i++)
                a.append("0");
        }
        /*reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());*/
        //cout << a << endl << b << endl;
        int maxi=0;
        int l = a.size();
        //cout << "l: " << l << endl;
        if(nz==0)
            cout << "0" << endl;
        else
        {
            int flag=0;
            for(int i=0; i<l; i++)
            {
                if((a[i]=='1')&&(b[i]=='1'))
                {
                    flag=1;
                    //cout << flag << endl;
                    int counti=1;
                    int j;
                    for(j=i+1; j<l; j++)
                    {
                        if(((a[j]=='1')&&(b[j]=='0'))||((a[j]=='0')&&(b[j]=='1')))
                        {
                            counti++;
                      //      cout << "coutni at j :" << counti << " " << j << endl;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if(counti>maxi)
                        maxi=counti;
                    i=j-1;
                }
            }
            if(flag==0)
                cout << "1" << endl;
            else
                cout << maxi+1 << endl;
        }
    }
    return 0;
}
