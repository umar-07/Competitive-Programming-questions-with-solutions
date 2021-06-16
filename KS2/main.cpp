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
        unsigned long long int m=1000000000;
        int j=0;
        unsigned long long int arr[m];
        cout << m;
        for(unsigned long long int i=1; i<m; i++)
        {
            long long int k=i, sum=0;
            while(k>0)
            {
                sum=sum+(k%10);
                k=k/10;
            }
            if(sum%10==0)
            {
                arr[j]=i;
                j++;
            }
            cout << sum << endl;
        }
        cout << arr[n-1] << endl;
    }
    return 0;
}
