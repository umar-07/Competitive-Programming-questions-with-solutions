#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int y, m, d;
        scanf("%d : %d : %d", &y, &m, &d);
        //cout << y << " " << m << " " << d << endl;
        int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
        int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
        int arr[13];
        int leap=0;
        if(y%4==0)
        {
            leap=1;
            if(y%400==0)
            {
               // cout << "e" << endl;
                leap=1;
            }
            else if(y%100==0)
            {
                leap=0;
            }
        }
        //cout << leap << endl;
        if(leap==1)
        {
            for(int i=0; i<13; i++)
                arr[i]=b[i];
        }
        else
        {
            for(int i=0; i<13; i++)
                arr[i]=a[i];
        }
        int med=0;
        if(d%2==0)
        {
            while(1)
            {
                med++;
                d=d+2;
                if(d>arr[m])
                {
                    d=d-arr[m];
                    m++;
                }
                if(d%2!=0)
                    break;
            }
        }
        else
        {
            while(1)
            {
                med++;
                d=d+2;
                if(d>arr[m])
                {
                    d=d-arr[m];
                    m++;
                }
                if(d%2==0)
                    break;
            }
        }
        cout << med << endl;
    }
    return 0;
}
