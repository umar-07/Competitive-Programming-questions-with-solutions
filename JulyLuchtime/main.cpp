#include <iostream>

using namespace std;

int getsum(int n)
{
    int sum = 0;
    while (n != 0)
    {
     sum = sum + n % 10;
     n = n/10;
    }
 return sum;
}

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
        {
            cin >> arr[i];
        }
        int m=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                int mult=arr[i]*arr[j];
                int k=getsum(mult);
                //cout << k << endl;
                if(k>m)
                {
                    m=k;
                    continue;
                }
            }
        }
        cout << m << endl;
    }
    return 0;
}
