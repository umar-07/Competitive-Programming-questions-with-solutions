#include <iostream>

using namespace std;

int main()
{
    int k, t;
    cin >> t;
    for(k=0; k<t; k++)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int a, b, c, d, e, f;
        a=arr[1]-arr[0];
        b=arr[2]-arr[1];
        c=arr[3]-arr[2];
        d=(arr[2]-arr[0])/2;
        e=(arr[3]-arr[1])/2;
        f=(arr[3]-arr[0])/3;
        int dif[6];
        dif[0]=a;
        dif[1]=b;
        dif[2]=c;
        dif[3]=d;
        dif[4]=e;
        dif[5]=f;
        int counti=0;
        if(a==b)
            counti++;
        if(a==c)
            counti++;
        if(a==d)
            counti++;
        if(a==e)
            counti++;
        if(a==f)
            counti++;
        int diff=dif[0];
        for(int i=1; i<6; i++)
        {
            int count2=0;
            for(int j=0; j<6; j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                if(dif[i]==dif[j])
                {
                    count2++;
                }
                }
            }
            if(count2>counti)
            {
                diff=dif[i];
            }
        }
        if(arr[1]-arr[0]!=diff)
        {
            if(arr[2]-arr[0]!=(2*diff))
            {
            arr[0]=arr[1]-diff;
            for(int l=0; l<n; l++)
            {
                cout << arr[l] << " ";
            }
            }
            else
            {
             for(int l=1; l<n; l++)
            {
                arr[l]=arr[l-1]+diff;
            }
            for(int l=0; l<n; l++)
            {
                cout << arr[l] << " ";
            }
            }
        }
        else
        {
            for(int l=1; l<n; l++)
            {
                arr[l]=arr[l-1]+diff;
            }
            for(int l=0; l<n; l++)
            {
                cout << arr[l] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
