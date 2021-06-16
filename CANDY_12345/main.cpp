#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int f=0;
    while(n--)
    {
        string s;
        cin >> s;
        int l = s.size();
        for(int i=0; i<l-1; i++)
        {
            if((s[i]=='c')&&(s[i+1]=='h'))
            {
                f++;
                break;
            }
            else if((s[i]=='h')&&(s[i+1]=='e'))
            {
                f++;
                break;
            }
            else if((s[i]=='e')&&(s[i+1]=='f'))
            {
                f++;
                break;
            }
        }
    }
    return 0;
}
