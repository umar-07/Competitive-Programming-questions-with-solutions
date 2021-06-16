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
        int count1=0, count2=0;
        for(int i=0; i<l;i++)
        {
            if(a[i]=='U')
                {
                    count1++;
                    for(int j=i+1; j<l; j++)
                    {
                        if(a[j]=='U')
                            continue;
                        else
                        {
                            i=j-1;
                            break;
                        }
                    }
                }
            else
            {
                    count2++;
                    for(int j=i+1; j<l; j++)
                    {
                        if(a[j]=='D')
                            continue;
                        else
                        {
                            i=j-1;
                            break;
                        }
                    }
            }
        }
        int k=min(count1, count2);
        cout << k << endl;
    }
    return 0;
}
