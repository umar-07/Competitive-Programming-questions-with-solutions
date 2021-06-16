#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s[n];
        int arr[n]={0};
        for(int i=0; i<n; i++)
            cin >> s[i];
        cin.sync();
        while(k--)
        {
            int l;
            cin >> l;
            string w[l];
            for(int i=0; i<n; i++)
            {
                cin >> w[i];
                for(int i=0; i<n; i++)
                {
                    if(s[i]==w[i])
                    {
                        arr[i]=1;
                        break;
                    }
                }
            }
        }
        cin.sync();
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
                cout << "YES" << " ";
            else //(arr[i]==0)
                cout << "NO" << " ";
        }
        cout << endl;
    }
    return 0;
}
