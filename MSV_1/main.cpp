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
        int h[1000000]={0};
        for(int i=0; i<n; i++)
        {
            h[arr[i]]=i;
        }
        /*for(int i=0; i<15; i++)
            cout << h[i] << " ";*/
        int maxi[1000001]={0};
        for(int j=0; j<n; j++)
        {
            //cout << floorSqrt(arr[j]) << endl;
            long double p = sqrtl(arr[j]);
            long long int o = p ;
            cout << o << endl;
            for(int i=1; i<=o; i++)
            {
                if(arr[j]%i==0)
                {
                    if((arr[j]/i)==i)
                    {
                        if(h[i]>h[arr[j]])
                            maxi[i]++;
                    }
                    else
                    {
                        if(h[i]>h[arr[j]])
                            maxi[i]++;
                        int k = arr[j]/i;
                        if(h[k]>h[arr[j]])
                            maxi[k]++;
                    }
                }
            }
        }
        int c=0;
        for(int i=0; i<1000001; i++)
        {
            if(maxi[i]>c)
                c=maxi[i];
        }
        /*for(int i=0; i<10001; i++)
        {
            if(maxi[i]!=0)
                cout << maxi[i] << " ";
        }
        cout << endl;*/
        cout << c << endl;
    }
    return 0;
}
