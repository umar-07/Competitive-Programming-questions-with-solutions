#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int n=str.size();
        int z=0;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='0')
                z++;
        }
        if(n==1)
            cout << str << endl;
        else
        {
            if((str[0]!='0')&&(str[n-1]!='0')&&(z==n-2)&&(n>2))
            {
                if(str[0]>=str[n-1])
                {
                        cout << str << endl;
                }
                else
                {
                    reverse(str.begin(), str.end());
                    cout << str << endl;
                }
            }
            else
            {
                for(int i=n-1; i>0; i--)
                {
                    int j=i-1;
                    //cout << j << endl;
                    while(1)
                    {
                        if(j==0)
                        {
                            if(str[j]>1)
                            {
                                int k = str[j] - '0';
                                k--;
                                char c = k+48;
                                //cout << c << endl;
                                str[j]=c;
                                str[i]='9';
                                //cout << str << endl;
                                break;
                            }
                        }
                        if(str[j]==0)
                        {
                            j--;
                        }
                        else
                        {
                            int k = str[j] - '0';
                            k--;
                            char c = k+48;
                            //cout << c << endl;
                            str[j]=c;
                            str[i]='9';
                            break;
                        }
                    }
                }
                reverse(str.begin(), str.end());
                cout << str << endl;
            }
        }

    }
    return 0;
}
