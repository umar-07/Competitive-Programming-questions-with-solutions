#include <bits/stdc++.h>

using namespace std;



int main()
{
    int a, b, c, d, e, f, sum=0;
    cin >> a >> b >> c >> d >> e >> f;
    if(f>e)
    {
        int mini;
        mini=min(b, min(c,d));
        sum=sum+(mini*f);
        b=b-mini;
        d=d-mini;
        c=c-mini;
        int mini2;
        mini2=min(a,d);
        sum=sum+(mini2*e);
        cout << sum << endl;
    }
    else
    {
        int mini;
        mini=min(a,d);
        sum=sum+(mini*e);
        a=a-mini;
        d=d-mini;
        int mini2=min(b,min(c,d));
        sum=sum+(mini2*f);
        cout << sum << endl;
    }
    return 0;
}
