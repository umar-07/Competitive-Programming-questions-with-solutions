#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >>k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int maxi=0;
        int l=0, x=0;
        for(int i=k-1; i<n; i++)
        {
            if(i==k-1)
            {
                for(int j=0; j<=k-1; j++)
                {
                    if(j==0)
                    {
                        x=arr[j]^arr[j+1];
                        j++;
                        continue;
                    }
                    else
                    {
                        x=x^arr[j];
                    }
                }
                //cout << x << endl;
            }
            else
            {
                x=x^arr[l];
                x=x^arr[i];
                //cout << x << endl;
                l++;
            }
            if(x>maxi)
                maxi=x;
            //cout << maxi << endl;
        }
        cout << maxi << endl;
    }
    return 0;
}
