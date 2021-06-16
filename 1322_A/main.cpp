#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int h=b-a;
        int v=d-c;
        int x, y, x1, y1, x2, y2;
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;
        int xf=x+h;
        int yf=y+v;
        int m_v=0, m_h=0;
        if(abs(x2-x1)>0)
            m_h=1;
        if(abs(y2-y1)>0)
            m_v=1;
        //cout << xf << " " << yf << endl;
        if((a==0)&&(b==0)&&(xf>=x1)&&(xf<=x2)&&(yf>=y1)&&(yf<=y2)&&(m_v==1))
            cout << "Yes" << endl;
        else if((c==0)&&(d==0)&&(xf>=x1)&&(xf<=x2)&&(yf>=y1)&&(yf<=y2)&&(m_h==1))
            cout << "Yes" << endl;
        else if((xf>=x1)&&(xf<=x2)&&(yf>=y1)&&(yf<=y2)&&(m_h==1)&&(m_v==1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
