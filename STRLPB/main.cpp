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
        int c=0;
        int n=s.size();
        for(int i=0; i<n-1; i++)
        {
            int j=s[i]- '0';
            int k=s[i+1]- '0';
            if((j-k)!=0)
                c++;
        }
        if((s[0]-s[n-1])!=0)
            c++;
        if(c<=2)
            cout << "uniform" << endl;
        else
            cout << "non-uniform" << endl;
    }
    return 0;
}
