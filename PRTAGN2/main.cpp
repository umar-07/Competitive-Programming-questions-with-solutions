#include <iostream>

using namespace std;

int main()
{
    int o;
    cin >> o;
    while(o--)
    {
        int f;
        cin >> f;
        int x;
        int s[1000]={0};
        while(f--)
        {
            int e=0, o=0;
            cin >> x;
            s[x]=1;
            for(int i=1; i<=1000; i++)
            {
                if(s[i]==1)
                {
                    for(int j=i+1; j<=1000; j++)
                        {
                            if(s[j]==1)
                            {
                                s[(i^j)]=1;
                            }
                        }
                }
            }
            for(int i=1; i<=1000; i++)
            {
                if(s[i]==1)
                {
                    int c=0;
                    for(int j=31; j>=0; j--)
                    {
                        int k=i>>j;
                        if(k & 1)
                            c++;
                    }
                    if((c!=0)&&(c%2==0))
                        e++;
                    else
                        o++;
                }
            }
            cout << e << " " << o << endl;
        }
    }
    return 0;
}
