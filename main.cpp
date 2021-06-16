#include <bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int k, x, maxi=0;
        cin >> k >> x;
        int h[26]={0};
        for(int i=0; i<n; i++)
        {
            h[s[i]-97]++;
            if(h[s[i]-97]>x)
            {
                if(k==0)
                {
                    break;
                }
                if(k>0)
                {
                    k--;
                    continue;
                }
            }
            else
                maxi++;
        }
        cout << maxi << endl;
    }
    return 0;
}
