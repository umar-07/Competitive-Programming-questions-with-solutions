#include <bits/stdc++.h>
#define ll long long


using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        ll int z1=0, o1=0, z2=0, o2=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]=='1')
                o1++;
            else
                z1++;
            if(b[i]=='1')
                o2++;
            else
                z2++;
        }
        ll int res=0;
        if(((o1==0)&&(o2==0))||((z1==0)&&(z2==0))||((z1==0)&&(o2==0))||((o1==0)&&(z2==0)))
            cout << "1" << endl;
        else
        {
            ll int total_one = o1+o2;
            ll int total_zero = z1+z2;
            ll int diff;
            if(o1>=o2)
                diff=o1-o2;
            else
                diff=o2-o1;
            ll int i = diff;
            while(1)
            {
                if((i>total_one)||(i>total_zero)||(i>n))
                    break;
                res= res +
            }
        }
    }
    return 0;
}
