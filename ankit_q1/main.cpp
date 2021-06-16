#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll a, b;
    ll c=0;
    for(int i=1; i<=100; i++)
    {
        for(int j=1; j<=100; j++)
        {
            if((11*i + 2*j)>100)
                continue;
            if(((7*i + 5*j)%(11*i + 2*j))==0)
            {
                c++;
                cout << i << " " << j << endl;
            }
        }
    }
    cout << c << endl;
	return 0;
}
