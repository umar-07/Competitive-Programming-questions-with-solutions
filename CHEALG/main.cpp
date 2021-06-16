#include <bits/stdc++.h>

using namespace std;

int countDigit(int n)
{
    int d=0;
    while(n!=0)
    {
        n=n/10;
        d++;
    }
    return d;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l = s.size();
        int co=0;
        for(int i=0; i<l-1; i++)
        {
            int si=0;
            if(s[i]==s[i+1])
            {
                int j;
                for(j=i; j<l; j++)
                {
                    if(s[i]!=s[j])
                        break;
                    si++;
                }
                i=j-1;
                co=co+countDigit(si)+1;
            }
            else
                co+=2;
        }
        if(s[l-2]!=s[l-1])
            co+=2;
        if(co<l)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        cout << co << endl;
    }
    return 0;
}
