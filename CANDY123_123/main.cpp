#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        ll l=0, bob=0;
        int flag=-1;
        int i=1;
        while(1)
        {
            l+=(2*i-1);
            if(l>a)
            {
                flag=0;
                break;
            }
            b+=(2*i);
            if(bob>b)
            {
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0)
            cout << "Bob" << endl;
        else
            cout << "Limak" << endl;
    }
    return 0;
}
