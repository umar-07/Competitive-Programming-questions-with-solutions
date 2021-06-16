#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string str;
    cin >> str;
    ll c=0;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='7' || str[i]=='4')
            c++;
    }
    int post=0;
    if(c==0)
    {
        cout << "NO" << endl;
    }
    else
    {
        while(c>0)
        {
            int rem = c%10;
            if(rem!=4 && rem!=7)
            {
                post=1;
                break;
            }
            c/=10;
        }
        if(post==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
