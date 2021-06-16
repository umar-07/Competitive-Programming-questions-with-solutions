#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, e;
        cin >> s >> e;
        int l, r;
        cin >> l >> r;
        int diff=0;
        int a, b;
        if(s=="monday")
            a=1;
        else if(s=="tuesday")
            a=2;
        else if(s=="wednesday")
            a=3;
        else if(s=="thursday")
            a=4;
        else if(s=="friday")
            a=5;
        else if(s=="saturday")
            a=6;
        else if(s=="sunday")
            a=7;
        if(e=="monday")
            b=1;
        else if(e=="tuesday")
            b=2;
        else if(e=="wednesday")
            b=3;
        else if(e=="thursday")
            b=4;
        else if(e=="friday")
            b=5;
        else if(e=="saturday")
            b=6;
        else if(e=="sunday")
            b=7;
        if(b>a)
            diff=b-a;
        else if(a>b)
            diff= (b-a)+7;
        else
            diff=0;
        diff++;
        //cout << "diff:  " <<  diff << endl;
        int counti=0;
        int un=0;
        for(int i=l; i<=r; i++)
        {
            if(i>diff)
                diff+=7;
            if(i/diff==1)
            {
                counti++;
                un=i;
            }
        }
        //cout <<  "counti::" << counti << endl;
        if(counti==0)
            cout << "impossible" << endl;
        else if(counti==1)
            cout << un << endl;
        else
            cout << "many" << endl;
    }
    return 0;
}
