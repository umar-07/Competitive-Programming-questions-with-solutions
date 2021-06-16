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
        int m1=INT_MAX, m2=INT_MAX, j;
       // cout << m1 << m2;
       for(int i=0; i<n; i++)
       {
           if(arr[i]<m1)
           {
               m1=arr[i];
               j=i;
           }
       }
       //cout << m1 << " " << j << endl;
       for(int i=0; i<n; i++)
       {
           if(arr[i]<m2)
           {
               if(j!=i)
               {
                   m2=arr[i];
               }
           }
       }
       //cout << m2 << endl;
       cout << m1+m2 << endl;
    }
    return 0;
}
