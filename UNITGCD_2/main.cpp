#include <bits/stdc++.h>

using namespace std;

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x = n/2;
        if(n<4)
        {
            if(n==1)
        {
            cout << "1" << '\n';
            cout << "1 " << "1" << '\n';
        }
        else if(n==2)
        {
            cout << "1" << '\n';
            cout << "2 " << "1 " << "2" << '\n';
        }
        else if(n==3)
        {
            cout << "1" << '\n';
            cout << "3 " << "1 " << "2 " << "3" << '\n';
        }
        }
        else
        {
            cout << x << '\n';
            cout << "3 " << "1 " << "2 " << "3" << '\n';
            for(int i=2; i<=x; i++)
            {
                if(i==x)
                {
                    if(n%2==0)
                    {
                        cout << "1 " << n << '\n';
                    }
                    else
                        cout << "2 " << n-1 << " " << n << '\n';
                    continue;
                }
                cout << "2 " << i*2 << " " << (i*2)+1 << '\n';
            }
        }
    }
    return 0;
}
