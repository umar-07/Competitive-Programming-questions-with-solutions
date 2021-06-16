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
        int arr[26]={0};
        for(int i=0; i<n; i++)
        {
            arr[s[i]-97]++;
        }
        int nz=0;
        for(int i=0; i<26; i++)
        {
            if(arr[i]>1)
                nz++;
        }
        int small = INT_MAX;
        if(nz==0)
            cout << "0" << endl;
        else
        {
            for(int i=0; i<26; i++)
            {
                if(arr[i]==1)
                    continue;
                char c = i+97;
                int f=0;
                int first=0;
                for(int j=0; j<n; j++)
                {
                    if(s[j]==c)
                    {
                        if(f==0)
                        {
                            f=1;
                            first=j;
                         //   cout << "first: " << first << " ";
                        }
                        else
                        {
                           // cout << "j: " << j << endl;
                            int dist = j-first;
                            first=j;
                           // cout << "word: " <<  s[j] << " distance: " << dist << endl;
                            if(small>dist)
                                small=dist;
                        }
                    }
                }
            }
            cout << n-small << endl;
        }
    }
    return 0;
}
