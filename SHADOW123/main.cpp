#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, l, r;
        cin >> a >> b >> l >> r;
        int x=min(l,r);
        int y=max(l,r);
        long long int alow=0, ahigh=0, blow=0, bhigh=0;
        for(int i=x; i<=y; i++)
        {
            if((i%a==0)&&(i>=a))
            {
                alow=i;
                cout << alow << " ";
                break;
            }
        }
        cout << endl;
        for(int i=x; i<=y; i++)
        {
            if((i%b==0)&&(i>=b))
            {
                blow=i;
                break;
            }
        }
        for(int i=y; i>=x; i--)
        {
            if((i%a==0)&&(i>=a))
            {
                ahigh=i;
                break;
            }
        }
        for(int i=y; i>=x; i--)
        {
            if((i%b==0)&&(i>=b))
            {
                bhigh=i;
                break;
            }
        }
        cout << alow << " " << ahigh << " " << blow << " " << bhigh << endl;
        long long int sa=0, sb=0;
        if((alow==0)||(ahigh==0))
        {
            sa=0;
        }
        else
        {
            sa=(((ahigh-alow+1)*(ahigh+alow))/2);
        }
        if((blow==0)||(bhigh==0))
        {
            sb=0;
        }
        else
        {
            sb=(((bhigh-blow+1)*(bhigh+blow))/2);
        }
        long long int ps;
        ps=sa+sb;
        cout << ps;
    }
    return 0;
}
