#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int p;
        cin >> p;
        int count=0;
        while(p!=0)
        {
            if(p>=2048)
            {
                count=count+p/2048;
                p=p%2048;
                continue;
            }
            else if(p>=1024)
            {
                count=count+p/1024;
                p=p%1024;
                continue;
            }
            else if(p>=512)
            {
                count=count+p/512;
                p=p%512;
                continue;
            }
            else if(p>=256)
            {
                count=count+p/256;
                p=p%256;
                continue;
            }
            else if(p>=128)
            {
                count=count+p/128;
                p=p%128;
                continue;
            }
            else if(p>=64)
            {
                count=count+p/64;
                p=p%64;
                continue;
            }
            else if(p>=32)
            {
                count=count+p/32;
                p=p%32;
                continue;
            }
            else if(p>=16)
            {
                count=count+p/16;
                p=p%16;
                continue;
            }
            else if(p>=8)
            {
                count=count+p/8;
                p=p%8;
                continue;
            }
            else if(p>=4)
            {
                count=count+p/4;
                p=p%4;
                continue;
            }
            else if(p>=2)
            {
                count=count+p/2;
                p=p%2;
                continue;
            }
            else if(p==1)
            {
                count++;
                p=0;
                continue;
            }
        }
        cout << count << endl;
    }
    return 0;
}
