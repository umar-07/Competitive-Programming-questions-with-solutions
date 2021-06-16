#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int c=0, si=0, e=0, m=0, h=0;
        while(n--)
        {
            string s;
            cin >> s;
            if(s=="cakewalk")
                c++;
            else if(s=="simple")
                si++;
            else if(s=="easy")
                e++;
            else if(s=="easy-medium" || s=="medium")
                m++;
            else if(s=="medium-hard" || s=="hard")
                h++;
        }
        if((c>=1)&&(si>=1)&&(e>=1)&&(m>=1)&&(h>=1))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
