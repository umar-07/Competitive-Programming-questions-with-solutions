#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll a, p, c=0;
    for(a=1; a<=100000; a++)
    {
        for(p=1; p<=100000; p++)
        {
            if((pow(a,p)-a)!=0)
                c++;
        }
    }
    cout << c << endl;

    return 0;
}
