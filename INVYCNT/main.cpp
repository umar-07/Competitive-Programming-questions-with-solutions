#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        long long int counti[n]={0};
        long long int pre[n]={0};
        for(int i=0; i<n-1; i++)
        {
            int c=0;
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]<arr[i])
                    c++;
            }
            counti[i]=c;
        }
        for(int i=1; i<n; i++)
        {
            int c=0;
            for(int j=0; j<i; j++)
            {
                if(arr[j]<arr[i])
                    c++;
            }
            pre[i]=c;
        }
        /*for(int i=0; i<n; i++)
            cout << counti[i] << " ";
        cout << endl;*/
        long long int oh = (k*(k+1))/2;
        long long int oj = (k*(k-1))/2;
        for(int i=0; i<n; i++)
        {
            pre[i]=pre[i]*oj;
            counti[i]=counti[i]*oh;
        }
        long long int sum=0;
        for(int i=0; i<n; i++)
        {
            sum = sum + pre[i];
            sum = sum + counti[i];
        }
        cout << sum << endl;
    }
    return 0;
}
