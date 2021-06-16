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
        {
            cin >> arr[i];
        }
        int d=0;
        int maxi=arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i]>maxi)
                maxi=arr[i];
        }
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==maxi)
                v.push_back(i);
        }
        if(v.size()==1)
            cout << n/2 << endl;
        else
        {
            d = ((n-1) - v[v.size()-1]) + (v[0]-0);
            //cout << "ARAAY: " << endl;
            //for(int i=0; i<v.size(); i++)
            //    cout << v[i] << " ";
            //cout << endl;
            for(int i=0; i<v.size()-1; i++)
            {
                int m = v[i+1]-v[i]-1;
                if(m>d)
                    d=m;
            }
            //cout << "d: " << d << endl;
            if(d>=n/2)
                cout << d - (n/2) + 1 << endl;
            else
                cout << "0" << endl;
        }
    }
    return 0;
}
