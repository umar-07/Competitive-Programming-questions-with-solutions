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
        int maxi=0;
        for(int i=1; i<n; i++)
        {
            int counti=0;
            for(int j=i-1; j>=0; j--)
            {
                if(arr[j]%arr[i]==0)
                    {
                        counti++;
                    }
            }
           // cout << i << "    " << arr[i] << " " << counti << endl;
            if(counti>maxi)
                maxi=counti;
        }
        cout << maxi << endl;
    }
    return 0;
}
