#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        int l=a.size();
        for(int i=0; i<l; i++)
        {
            if(a[i]=='<')
                a[i]='>';
            else if(a[i]=='>')
                a[i]='<';
            else
                continue;
        }
        int count=0;
        for(int i=0; i<l-1; i++)
        {
            if((a[i]=='>')&&(a[i+1]=='<'))
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
