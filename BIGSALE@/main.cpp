#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,price,quantity,discount;
		cin>>n;
		double loss=0;
	   while(n--)
		{
		cin>>price>>quantity>>discount;
		 loss=loss+(price*0.0001*discount*discount*quantity);

	   }
	    cout<<fixed<<setprecision(8)<<loss<<endl;

	}
}
