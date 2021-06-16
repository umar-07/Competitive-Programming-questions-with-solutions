#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >>k;
        string w[n];
        for(int i=0; i<n; i++)
            cin >> w[i];
        int arr[n]={0};
        for(int i=0; i<k; i++)
        {
            int l;
            cin >> l;
            string f[l];
            for(int i=0; i<l; i++)
            {
                cin >> f[i];
                for(int j=0; j<n; j++)
                {
                    if(f[i]==w[j])
                    {
                        arr[j]=1;
                    }
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
                cout << "YES" << " ";
            else
                cout << "NO" << " ";
        }
        cout << endl;
    }

    return 0;
}
