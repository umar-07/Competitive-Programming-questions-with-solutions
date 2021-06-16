#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        char arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin >> arr[i][j];
            }
        }
        //cout << endl;
        char s1[n][m], s2[n][m];
        for(int i=0; i<n; i++)
        {
            if(i==0)
                s1[0][0]='R';
            else
            {
                if(s1[i-1][0]=='R')
                    s1[i][0]='G';
                else
                    s1[i][0]='R';
            }
            for(int j=0; j<m; j++)
            {
                if(s1[i][j-1]=='R')
                    s1[i][j]='G';
                else
                    s1[i][j]='R';
            }
        }
        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout << s1[i][j];
            }
            cout << endl;
        }
        cout << endl;*/
        for(int i=0; i<n; i++)
        {
            if(i==0)
                s2[0][0]='G';
            else
            {
                if(s2[i-1][0]=='G')
                    s2[i][0]='R';
                else
                    s2[i][0]='G';
            }
            for(int j=0; j<m; j++)
            {
                if(s2[i][j-1]=='G')
                    s2[i][j]='R';
                else
                    s2[i][j]='G';
            }
        }
        /*for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout << s2[i][j];
            }
           // cout << endl;
        }
        //cout << endl;*/
        int count1=0, count2=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]==s1[i][j])
                    continue;
                else
                {
                    if(arr[i][j]=='R')
                        count1=count1+5;
                    else if(arr[i][j]=='G')
                        count1=count1+3;
                }
                //cout << count1 <<endl;
            }
            //cout << endl;
            for(int j=0; j<m; j++)
            {
                if(arr[i][j]==s2[i][j])
                    continue;
                else
                {
                    if(arr[i][j]=='R')
                        count2=count2+5;
                    else if(arr[i][j]=='G')
                        count2=count2+3;
                }
                //cout << count2 << endl;
            }
        }
        int mo=min(count1,count2);
        cout << mo << endl;
    }
    return 0;
}
