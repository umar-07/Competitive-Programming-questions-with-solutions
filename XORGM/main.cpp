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
        int a[n], b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        int x=a[0];
        for(int i=1; i<n; i++)
            x=x^a[i];
        x=x^b[0];
        for(int i=1; i<n; i++)
            x=x^b[i];
        //cout << "X: " << x << endl;
        int res[n];
        for(int i=0; i<n; i++)
            res[i]=x^a[i];
        sort(b, b+n);
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(binary_search(b, b+n, res[i]))
                continue;
            else
            {
                //cout << "NOT FOUND: " << res[i] << endl;
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout << "-1" << endl;
        else
        {
            for(int i=0; i<n; i++)
                cout << res[i] << " ";
            cout<< endl;
        }
    }
    return 0;
}
