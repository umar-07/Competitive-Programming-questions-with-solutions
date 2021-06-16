#include <iostream>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        long double p[n], q[n], d[n], l[n];
        for(int i=0; i<n; i++)
        {
            cin >> p[i];
            cin >> q[i];
            cin >> d[i];
        }
        long double loss=0;
        for(int i=0; i<n; i++)
        {
            long double up=p[i]+(p[i]*(d[i]/100));
            //cout << up;
            long double down=up-(up*(d[i]/100));
            //cout << down;
            loss=loss+((p[i]-down)*q[i]);
            //cout << loss;
            //cout << endl;
        }
        cout.precision(8);
        cout<< fixed << loss << endl;
    }
    return 0;
}
