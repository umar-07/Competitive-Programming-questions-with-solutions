#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << endl;
using namespace std;

int main()
{
    ll n, p;
    cin >> n >> p;
    p--;
    string s;
    cin >> s;
    int flag=0;
    ll i=p;
    ll last=i;
    ll c=0;
    while(1)
    {
        cout << endl << endl;
        if(i==p && flag==1)
            break;
        flag=1;
        debug(i);
        if(s[i]==s[n-1-i])
        {
            cout << "found equal" << endl;
            i++;
            if(i==n)
                i=0;
            continue;
        }
        ll a = s[i]-'a' + 1;
        ll b = s[n-1-i]-'a' +1;
        debug(a); debug(b);
        ll dif = abs(a-b);
        ll up;
        if(dif>(26-dif))
            up=26-dif;
        else
            up=dif;
        debug(up);
        c+=up;
        if(i>last)
            {
                c+=(i-last);
                cout << "change in moement: " << (i-last) << endl;
            }
        else
            {
                c+=(n-(last-i));

                cout << "change in moement: " << (i-last) << endl;
            }
        last=i;
        cout << "change in last is ";
        debug(last);
        s[i]=s[n-1-i];
        debug(c);
        i++;
        if(i==n)
            i=0;
    }
    cout << c << endl;
    return 0;
}
