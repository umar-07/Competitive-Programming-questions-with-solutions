#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        int flag=0;
        cin >> n >> m;
        int arr[m];
        vector <int> v;
        v.clear();
        vector <int> :: iterator itr;
        for(int i=0; i<m; i++)
            cin >> arr[i];
        for(int i=0; i<m; i++)
        {
            if((i+1)%n==0)
                {
                    v.clear();
                    cout << v.size() << endl;
                }
            if(v.size()!=0)
            {for(itr=v.begin(); itr!=v.end(); itr++)
            {
                int k = *itr;
                cout << k << endl;
                if(k == arr[i])
                {
                    flag=1;
                    break;
                }
            }}
            v.push_back(arr[i]);
        }
        if(flag==0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
