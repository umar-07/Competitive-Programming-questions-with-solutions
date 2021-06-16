#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int act, money=0;
        string org;
        cin >> act;
        cin >> org;
        cin.sync();
        string aa = "CONTEST_WON";
        string ab = "TOP_CONTRIBUTOR";
        string ac = "BUG_FOUND";
        string ad = "CONTEST_HOSTED";
        while(act--)
        {
            string str;
            cin >> str;
            if(str==aa)
            {
                int ran;
                cin >> ran;
                if(ran<=20)
                {
                    money+=(300+(20-ran));
                }
                else
                    money+=300;
            }
            else if(str==ab)
            {
                money+=300;
            }
            else if(str==ac)
            {
                int sev;
                cin >> sev;
                money+=sev;
            }
            else if(str==ad)
                money+=50;
        }
        if(org=="INDIAN")
            cout << money/200 << endl;
        else
            cout << money/400 << endl;
    }
    return 0;
}
