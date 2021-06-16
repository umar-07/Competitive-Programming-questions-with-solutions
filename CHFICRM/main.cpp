#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll a=0, b=0, c=0;
        int flag=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==5)
            {
                a++;
                continue;
            }
            if(arr[i]==10)
            {
                if(a==0)
                {
                    flag=1;
                    break;
                }
                b++;
                a--;
                continue;
            }
            if(arr[i]==15)
            {
                if(b>0)
                {
                    c++;
                    b--;
                    continue;
                }
                if(a>1)
                {
                    c++;
                    a-=2;
                    continue;
                }
                flag=1;
                break;
            }
        }
        if(flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
	return 0;
}
