#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    string str;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x==1)
            str.push_back('(');
        else
            str.push_back(')');
    }
    ll dep=0;
    ll idx=-1;
    ll c=0;
    ll f=0, b=0;
    ll at_max=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='(')
        {
            f++;
        }
        else if(str[i]==')')
            b++;
        ll k = f-b;
        if(k>at_max)
        {
            at_max=k;
            c=i;
        }
        if(f==b)
        {
            if(dep<at_max)
            {
                dep=at_max;
                idx=c;
            }
            f=0, b=0;
        }
    }
    ll p=0, q=0, r=0;
    ll forw=0, backw=0;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='(')
        {
            if(forw==0)
                q=i;
            forw++;
        }
        else if(str[i]==')')
        {
            backw++;
        }
        if(forw==backw)
        {
            if(forw+backw>p)
            {
                p=forw+backw;
                r=q;
            }
            forw=0, backw=0;
        }
    }
    cout << dep << " " << idx+1 << " " << p << " " << r+1 << endl;
    return 0;
}
