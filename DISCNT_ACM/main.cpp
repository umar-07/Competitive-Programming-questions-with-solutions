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
        int b=n;
        int m=0;
        while(b>0)
        {
            b=b/10;
            m++;
        }
        int arr[m];
        int arr2[m];
        b=n;
        for(int i=0; i<m; i++)
        {
            arr[i]=b%10;
            b=b/10;
        }
        reverse(arr, arr+m);
        for(int i=0; i<m; i++)
        {
            int sum=0;
            for(int j=0; j<m; j++)
            {
                if(i==j)
                    continue;
                sum=sum*10+arr[j];
            }
            arr2[i]=sum;
        }
        sort(arr2, arr2+m);
        cout << arr2[0] << endl;
    }
    return 0;
}
