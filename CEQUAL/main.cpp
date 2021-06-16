#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag=0;
        cin >> n;
        long long int a[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        sort(a, a+n);
        for(int i=0; i<n-1; i++)
        {
            if(a[i]==a[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    return 0;
}
