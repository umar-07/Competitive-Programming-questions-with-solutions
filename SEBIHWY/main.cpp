#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        double s, sg, fg, d, t;
        cin >> s >> sg >> fg >> d >> t;
        double total=d*50;
        double m=3600/t;
        double k = (total*m)/1000.0000;
        double bs = s+k;
        double a=fabs(bs-sg);
        double b=fabs(bs-fg);
        //cout << a << " " << b << endl;
        if(b<a)
            cout << "FATHER" << endl;
        else if(a<b)
            cout << "SEBI" << endl;
        else
            cout << "DRAW" << endl;
    }
    return 0;
}
