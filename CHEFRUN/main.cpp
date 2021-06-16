#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
         double x, y, z, u, v;
         cin >> x >> y >> z >> u >> v;
         double t1, t2;
         t1=(z-x)/u;
         t2=(y-z)/v;
         //cout << t1 << " " << t2 << endl;
         if(t1<t2)
            cout << "Chef" << endl;
         else if(t2<t1)
            cout << "Kefa" << endl;
         else
            cout << "Draw" << endl;
    }
    return 0;
}
