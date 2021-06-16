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
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int a=arr[0], b=0, m=1;
        int i=1, j=n-1;
        int ap=arr[0], bp=0;
        while(i<=j)
        {
           // cout << "move " << m << endl;
            if(m%2!=0)
            {
                bp=0;
             //   cout << "alice pre: " << ap << endl;
               // cout << "bob eaets" << " ";
                while(bp<=ap && j>=i)
                {
                    bp+=arr[j];
                 //   cout << j << " ";
                    j--;
                }
                //cout << endl;
                //cout << "bobs toal inthis move: " << bp << endl;
                b+=bp;
                m++;
                continue;
            }
            else if(m%2==0)
            {
                //cout << "bob pre: " << bp << endl;
                //cout << "alice eaets" << " ";
                ap=0;
                while(ap<=bp && j>=i)
                {
                    ap+=arr[i];
                  //  cout << i << " ";
                    i++;
                }
               // cout << endl;
               // cout << "alice toal inthis move: " << ap << endl;
                a+=ap;
                m++;
                continue;
            }
           // cout << endl;
        }
        cout << m << " " << a << " " << b << endl;
    }
	return 0;
}
