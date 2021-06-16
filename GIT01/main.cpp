#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, c1=0, cost2=5, c3=0, c4=0;
        cin >> n >> m;
        char arr[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
                cin >> arr[i][j];
        }
        if(arr[0][0]=='R')
        {
            for(int i=0; i<n; i++)
            {
                if(i!=0)
                {
                    if(arr[i][0]==arr[i-1][0])
                    {
                        if(arr[i-1][0]=='R')
                        {
                            arr[i][0]='G';
                            c1+=5;
                        }
                        else
                            {
                                arr[i][0]='R';
                                c1+=3;
                            }
                    }
                }
                for(int j=1; j<m; j++)
                {
                    if(arr[i][j]==arr[i][j-1])
                    {
                        if(arr[i][j-1]=='R')
                            {
                                arr[i][j]='G';
                                c1+=5;
                            }
                        else
                            {
                                arr[i][j]='R';
                                c1+=3;
                            }
                    }
                }
            }
            arr[0][0]='G';
            for(int i=0; i<n; i++)
            {
                if(i!=0)
                {
                    if(arr[i][0]==arr[i-1][0])
                    {
                        if(arr[i-1][0]=='R')
                        {
                            arr[i][0]='G';
                            cost2=cost2+5;
                        }
                        else
                            {
                                arr[i][0]='R';
                                cost2=cost2+3;
                            }
                    }
                }
                for(int j=1; j<m; j++)
                {
                    if(arr[i][j]==arr[i][j-1])
                    {
                        if(arr[i][j-1]=='R')
                            {
                                arr[i][j]='G';
                                cost2=cost2+5;
                            }
                        else
                            {
                                arr[i][j]='R';
                                cost2=cost2+3;
                            }
                    }
                }
            }
            cout << c1 << endl << cost2;
        }
    }
    return 0;
}
