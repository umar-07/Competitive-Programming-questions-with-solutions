#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll h, c, t;
        cin >> h >> c >> t;
        if(h==t)
        {
            cout << 1 << endl;
            continue;
        }
        if(h+c>=2*t)
        {
            cout << 2 << endl;
            continue;
        }
        double hot = (h*1.0);
        double cold = (c*1.0);
        double wanted = (t*1.0);
        double y = (hot-wanted)/((2.0*wanted)-(hot+cold));
        //debug(y);
        ll p = y;
        ll q = y+1;
        ll r =y-1;
        ll s = y+2;
        ll w = y-2;
        //debug(p) debug(q) debug(r) debug(s) debug(w)
        //cout << endl;
        double mini=(INT_MAX)*(1.0);
        //debug(mini);
        ll cups=-1;

        //P
        double v = (p*1.0);
        double u = ((p+1)*1.0);
        double t_p = ((u*hot)+(v*cold))/((u+v));

        double ab = abs(t_p-wanted);
        //cout << "ab for p " << ab << endl;
        //cout << "t_p for p " << t_p << endl;
        //cout << endl;
        if(ab<mini)
        {
            mini=ab;
            cups=p;
        }

        //Q
        v = (q*1.0);
        u = ((q+1)*1.0);
        t_p = ((u*hot)+(v*cold))/((u+v));

        ab = abs(t_p-wanted);
        //cout << "ab for q " << ab << endl;
        //cout << "t_p for q " << t_p << endl;
        //cout << endl;
        //debug(ab) debug(mini) cout << endl;
        if(ab<mini)
        {
            //cout << "ENTERED";
            mini=ab;
            cups=q;
        }

        //R
        v = (r*1.0);
        u = ((r+1)*1.0);
        t_p = ((u*hot)+(v*cold))/((u+v));

        ab = abs(t_p-wanted);
        //cout << "ab for r " << ab << endl;
        //cout << "t_p for r " << t_p << endl;
        //cout << endl;
        if(ab<mini && r>0)
        {
            mini=ab;
            cups=r;
        }

        //S
        v = (s*1.0);
        u = ((s+1)*1.0);
        t_p = ((u*hot)+(v*cold))/((u+v));

        ab = abs(t_p-wanted);
        //cout << "ab for s " << ab << endl;
        //cout << "t_p for s " << t_p << endl;
        //cout << endl;
        if(ab<mini)
        {
            mini=ab;
            cups=s;
        }

        //w
        v = (w*1.0);
        u = ((w+1)*1.0);
        t_p = ((u*hot)+(v*cold))/((u+v));

        ab = abs(t_p-wanted);
        //cout << "ab for w " << ab << endl;
        //cout << "t_p for w " << t_p << endl;
        //cout << endl;
        if(ab<mini && w>0)
        {
            mini=ab;
            cups=w;
        }

        //debug(cups);
        ll res = cups+(cups+1);
        cout << res << endl;
    }
	return 0;
}
