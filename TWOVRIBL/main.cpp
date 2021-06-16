#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x;
        cin >> x;
        double n;
        int l;
        if(x==1)
            cout << "1" << endl;
        else if(x==2)
            cout << "2" << endl;
        else if(x==3)
            cout << "3" << endl;
        else if(x==8)
            cout << "5" << endl;
        else
        {
            x=x-3;
            int h=x+1;
            int l=8*h;
            int g=l+1;
            n=(((-1)+sqrt(g))/2);
            //cout << l << " " << n;
            int k=n;
            cout << k+3 << endl;
        }
    }
    return 0;
}
