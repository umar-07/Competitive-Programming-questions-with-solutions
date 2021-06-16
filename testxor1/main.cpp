#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r, newl;
        cin >> l >> r;
        int counti=l;
        while(true)
        {
            if(counti%4==0)
            {
                newl=counti+1;
                break;
            }
            else
                {
                    counti++;
                    continue;
                }
        }
        int q=r%4; int z;
        int total=r-l+1;
        int j=newl-l;
        int y=l;
        int leftitem=total-j;
        if(leftitem==1)
            z=r;
        else
        {
            if(q==0)
            z=l;
        else if(q==1)
            z=1;
        else if(q==2)
            z=l+1;
        else if(q==3)
            z=0;
        }
        for(int i=0; i<j; i++)
        {
            z=z^y;
            y++;
        }
        cout << (3^4^5^6) << endl;
    }
    return 0;
}
