#include <iostream>
using namespace std;

int main()
{
    int t, c;
    cin >> t;
    for(c=0; c<t; c++)
    {
        int m, x, y, i, j, k, l, p;
        cin >> m >> x >> y;
        int b=x*y;
        int cop[m];
        for(j=0; j<m; j++)
        {
            cin >> cop[j];
        }
        int arr[100];
        for(i=0; i<100; i++)
        {
            arr[i]=1;
        }
        for(j=0; j<m; j++)
        {
            int a= cop[j];
            if(a-b>=0)
            {
                for(k=a; k>=a-b; k--)
                {
                    arr[k-1]=0;
                }
            }
            else
                for(k=a; k>=1; k--)
                {
                    arr[k-1]=0;
                }
            if(a+b>=100)
            {
                for(l=a; l<=100; l++)
                {
                    arr[l-1]=0;
                }
            }
            else
                for(l=a; l<=a+b; l++)
            {
                arr[l-1]=0;
            }
        }
        int count1=0;
        for(p=0; p<100; p++)
        {
            if(arr[p]==1)
                count1++;
        }
        cout << count1 << endl;

    }
    return 0;
}
