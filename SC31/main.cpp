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
        string arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        string s = arr[0];
        for(int i=1; i<n; i++)
        {
            for(int j=0; j<10; j++)
            {
                if((s[j]==arr[i][j])&&(s[j]='1'))
                    s[j]='0';
                else if(((s[j]=='1')&&(arr[i][j]=='0'))||((s[j]=='0')&&(arr[i][j]=='1')))
                    s[j]='1';
                else
                    s[j]='0';

            }
        }
        int counti=0;
        for(int i=0; i<10; i++)
        {
            if(s[i]=='1')
                counti++;
        }
        cout << counti << endl;
    }
    return 0;
}
