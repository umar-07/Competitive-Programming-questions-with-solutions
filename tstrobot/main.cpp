#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int k, t;
    cin >> t;
    for(k=0; k<t; k++)
    {
        int i, j, n, x;
        cin >> n >> x;
        char arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int c[n];
        c[0]=x;
        int counti=1;
        for(i=0; i<n; i++)
        {
            if(arr[i]=='R')
            {
                x++;
                int check=0;
                for(int m=0; m<counti; m++)
                {
                    if(c[m]==x)
                    {
                        check=1;
                    }
                }
                if(check==0)
                {
                    c[counti]=x;
                    counti++;
                }
            }
            if(arr[i]=='L')
            {
                x--;
                int check1=0;
                for(int m=0; m<counti; m++)
                {
                    if(c[m]==x)
                    {
                        check1=1;
                    }
                }
                if(check1==0)
                {
                    c[counti]=x;
                    counti++;
                }
            }
        }
        cout << counti << endl;
    }
    return 0;
}
