#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n=0,k=0,s=0;
	    cin>>n>>k>>s;
	    ll req=k*s;
	    ll d=s-s/7;
	    ll max1=d*n;
	    if(max1>=req)
	    {
	        ll count=req/n;
	        if(req%n)
	        {
	            count++;
	        }
	        cout<<count<<endl;
	    }
	    else
	    {
	        cout<<"-1\n";
	    }
    }
    return 0;
}
