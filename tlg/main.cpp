#include <iostream>

using namespace std;

int main()
{
    int n, i, p, maxi;
    cin >> n;
    int arr[n][2];
    for(i=0; i<n; i++)
    {
        cin >> arr[i][0];
        cin >> arr[i][1];
    }
    if(arr[0][0]>arr[0][1])
    {
        maxi=arr[0][0]-arr[0][1];
        p=1;
    }
    else
        {
        maxi=arr[0][1]-arr[0][0];
        p=2;
        }
    int arr1[n][2];
    for(i=0; i<n; i++)
    {
        if(i==0)
        {
            arr1[i][0]=arr[i][0];
            arr1[i][1]=arr[i][1];
        }
        else
        {
            arr1[i][0]=arr[i][0]+arr1[i-1][0];
            arr1[i][1]=arr[i][1]+arr1[i-1][1];
            int a, b;
            a= arr1[i][0]-arr1[i][1];
            b=arr1[i][1]-arr1[i][0];
            if(a>0)
            {
                if(a>maxi)
                {
                    maxi=a;
                    p=1;
                }
            }
            else
            {
                if(b>maxi)
                {
                    maxi=b;
                    p=2;
                }
            }
        }


    }
    cout << p << " " << maxi << endl;
    return 0;
}
