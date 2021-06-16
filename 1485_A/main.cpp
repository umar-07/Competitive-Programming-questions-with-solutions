#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       ll a, b;
       cin >> a >> b;
       ll maxi = -1;
       if(b>a)
            maxi=1;
        else if(b==a)
            maxi=2;
       if(maxi!=-1)
       {
           cout << maxi << endl;
           continue;
       }
       ll flag=0;
       ll p=b;
       if(p==1)
       {
           p=2;
           flag=1;
       }
       ll m = INT_MAX;
       while(1)
       {
           ll numb=a;
           ll local=0;
           while(numb!=0)
           {
               numb=numb/p;
               local++;
           }
           ll total = local + (p-b);
           if(total<m)
           {
               m=total;
           }
           p++;
           if(m<(p-b))
            break;
       }
       cout << m << endl;
    }
	return 0;
}
