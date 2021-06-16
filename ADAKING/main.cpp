#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll k;
        cin >> k;
        int flag=0;
        cout << "0";
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(i==0 && j==0)
                    continue;
                k--;
                if(k<=0)
                    flag=1;
                if(flag==1)
                {
                    cout << "X";
                    continue;
                }
                else
                {
                    cout << ".";
                    continue;
                }
            }
            cout << endl;
        }
    }
	return 0;
}
