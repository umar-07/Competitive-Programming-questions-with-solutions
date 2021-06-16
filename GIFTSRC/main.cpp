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
        string s;
        cin >> s;
        int x=0, y=0;
        vector <char> arr;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='U' || s[i]=='D')
            {
                arr.push_back(s[i]);
                for(int j=i+1; j<n; j++)
                {
                    if(s[j]=='U' || s[j]=='D')
                    {
                        if(j==n-1)
                        {
                            i=n-1;
                            break;
                        }
                        continue;
                    }
                    else
                    {
                        i=j;
                        i--;
                        break;
                    }
                }
            }
            else
            {
                arr.push_back(s[i]);
                for(int j=i+1; j<n; j++)
                {
                    if(s[j]=='L' || s[j]=='R')
                    {
                        if(j==n-1)
                        {
                            i=n-1;
                            break;
                        }
                        continue;
                    }
                    else
                    {
                        i=j;
                        i--;
                        break;
                    }
                }
            }
        }
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]=='L')
                x--;
            else if(arr[i]=='R')
                x++;
            else if(arr[i]=='U')
                y++;
            else
                y--;
        }
        cout << x << " " << y << endl;
    }
    return 0;
}
