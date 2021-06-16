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
        int n= s.size();
        for(int i=0; i<n; i++)
        {
            if(s[i]=='m')
            {
                if(i==0)
                {
                    if(s[i+1]=='s')
                        s[i+1]='o';
                        continue;
                }
                else if(i==n-1)
                {
                    if(s[i-1]=='s')
                        s[i-1]='o';
                        continue;
                }
                else
                {
                        if(s[i+1]=='s')
                        {
                            s[i+1]='o';
                            continue;
                        }
                        else if(s[i-1]=='s')
                        {
                            s[i-1]='o';
                            continue;
                        }
                }
            }
        }
        int snake=0, mong=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='s')
                snake+=1;
            else if(s[i]=='m')
                mong+=1;
        }
        /*for(int i=0; i<n; i++)
            cout << s[i] << " " ;
        cout << endl;
        cout << snake << " " << mong << endl;*/
        if(snake>mong)
            cout << "snakes" << endl;
        else if(mong>snake)
            cout << "mongooses" << endl;
        else
            cout << "tie" << endl;
    }
    return 0;
}
