#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        int flag=0;
        int ix=n/4, iy=(n/4)*2, iz=(n/4)*3;
        int x=arr[ix], y=arr[iy], z=arr[iz];
        for(int i=0; i<n; i++)
        {
            if(i<(n/4))
            {
                if(arr[i]>=x)
                {
                    flag=1;
                    break;
                }
            }
            else if((i>=(n/4))&&(i<(n/4)*2))
            {
                if((arr[i]<x)||(arr[i]>=y))
                {
                    flag=1;
                    break;
                }
            }
            else if((i>=(n/4)*2)&&(i<(n/4)*3))
            {
                if((arr[i]<y)||(arr[i]>=z))
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                if(arr[i]<z)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
            cout << x << " " << y << " " << z << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}
