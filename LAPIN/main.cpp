#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int a[26]={0};
        int b[26]={0};
        int n = s.size();
        if(n%2==0)
        {
            for(int i=0; i<n/2; i++)
            {
                int k = s[i] - 97;
                a[k]++;
                //cout << k << " ";
            }
            for(int i=n/2; i<n; i++)
            {
                int k = s[i] - 97;
                b[k]++;
            }
        }
        else
        {
            for(int i=0; i<n/2; i++)
            {
                int k = s[i] - 97;
                a[k]++;
                //cout << k << " ";
            }
            for(int i=(n/2)+1; i<n; i++)
            {
                int k = s[i] - 97;
                b[k]++;
            }
        }
        int flag=0;
        for(int i=0; i<26; i++)
        {
            if(a[i]!=b[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
