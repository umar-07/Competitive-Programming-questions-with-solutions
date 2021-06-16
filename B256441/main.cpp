#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {int n, a, b;
    cin >> n >> a >> b;
    int x, y;
    int res=0;
    int i=1, j=n;
    if((a+b)==n)
        cout << "1" << endl;
    else if(a==b)
    {
        if(n%2==0)
        {
            int ans=n/2;
            cout << a/ans << endl;
        }
        else
        {
            int ans=n/2;
            ans--;
            cout << a/ans << endl;
        }
    }
    else
    {
        while(i<j)
        {
            int fir=a/i;
            int sec=b/j;
            int mini= min(fir, sec);
            if(mini>res)
                res=mini;
            i++;
            j--;
        }
        cout << res << endl;
    }
    }
    return 0;
}
