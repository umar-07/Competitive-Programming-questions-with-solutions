#include <bits/stdc++.h>

using namespace std;

bool isPowerOfTwo(long long int n)
{
   if(n==0)
   return false;

   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int f=0, s=0;
        int j;
        long long int b=n;
        int c=0;
        while(b>0)
        {
            b=b/10;
            c++;
        }
        int arr[c];
        b=n;
        for(int i=0; i<c; i++)
        {
            arr[i]=b%10;
            b=b/10;
        }
        reverse(arr, arr+c);
        for(int i=0; i<c; i++)
        {
            if(arr[i]!=0)
                j=i;
        }
        long long int num=0;
        for(int i=0; i<=j; i++)
            num=num*10 + arr[i];
        int z = (c-1)-j;
        if(num==1)
            cout << "Yes" << endl;
        else
        {
            if(!isPowerOfTwo(num))
                cout << "No" << endl;
            else
            {
                long long int u = log2(num);
                if(z<u)
                    cout << "No" << endl;
                else
                    cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
