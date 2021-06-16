#include <bits/stdc++.h>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.sync();
    while(t--)
    {
        string a;
        getline (cin,a);
        int l=a.size();
        int c=0;
        for(int i=0; i<l; i++)
        {
            if(a[i]==' ')
                c++;
        }
        if(c==0)
        {
            transform(a.begin(), a. ::toupper);
        }
        cout << a;
    }
    return 0;
}
