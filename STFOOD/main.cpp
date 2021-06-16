#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int s[n], p[n], v[n];
        for(int i=0; i<n; i++)
        {
            cin >> s[i] >> p[i] >> v[i];
        }
        int mp=INT_MIN;
        for(int i=0; i<n; i++)
        {
            int res;
            res=p[i]/(s[i]+1);
            res=res*v[i];
            if(res>mp)
                mp=res;
        }
        cout << mp << endl;
    }
    return 0;
}
