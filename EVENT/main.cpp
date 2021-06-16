#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s, e;
        int l, r;
        cin >> s >> e >> l >> r;
        int i, j;
        if(s=="monday")
            i=7;
        else if(s=="tuesday")
            i=6;
        else if(s=="wednesday")
            i=5;
        else if(s=="thursday")
            i=4;
        else if(s=="friday")
            i=3;
        else if(s=="saturday")
            i=2;
        else if(s=="sunday")
            i=1;
        if(e=="monday")
            j=7;
        else if(e=="tuesday")
            j=6;
        else if(e=="wednesday")
            j=5;
        else if(e=="thursday")
            j=4;
        else if(e=="friday")
            j=3;
        else if(e=="saturday")
            j=2;
        else if(e=="sunday")
            j=1;
        //cout << i << " " << j << endl;
        int rem;
        if(i>j)
            rem=i-j+1;
        else if(i<j)
            rem=(7-(j-i)+1);
        else if(i==j)
            rem=7;
        //cout << rem << endl;
        int days=0;
        int un;
        for(int k=l; k<=r; k++)
        {
            if(k<8)
            {
                if(rem==k)
                {
                    days++;
                if(days==1)
                    un=k;
                }
            }
            else
            {
                if((k-7)%rem==0)
                {
                    if(days==0)
                        un=k;
                    days++;
                }
                else
                    continue;
            }
            if(days>1)
                break;
        }
        if(days==0)
            cout << "impossible" << endl;
        else if(days==1)
            cout << un << endl;
        else
            cout << "many" << endl;
    }
    return 0;
}
