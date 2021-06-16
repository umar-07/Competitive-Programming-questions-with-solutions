#include<bits/stdc++.h>
using namespace std ;
#define ll long long

int main()
{
	//ios_base::sync_with_stdio(false) ;
	//cin.tie(NULL) ;
	ll int h, u, d, f ;
	while(1)
	{
	    scanf("%lld %lld %lld %lld", &h, &u, &d, &f);
		ll int date=1, flag=0 ;
		double ans=0, k=0 ;
		k=u/10 ;
		{
			//printf("%lld \n", u) ;
			ans=ans+u ;
			//printf("%lf \n", ans) ;
			if(ans>h)
			{
				printf("success on day %lld\n", date) ;
				break ;
			}
			else if(ans<0)
			{
				printf("failure on day %lld\n", date) ;
				break ;
			}
			else
			{
				date++ ;
				ans=ans-d ;
			}
		}
		// printf("%lf %lf\n",ans,k) ;
		while(flag == 1)
		{
			u=u-k ;
			ans=ans+u ;
			if(ans>=h)
			{
				flag=1 ;
				printf("success on day %lld\n", date) ;
				break ;
			}
			else if(ans<=0)
			{
				flag=1 ;
				printf("failure on day %lld\n", date) ;
				break ;
			}
			else
			{
				date++ ;
				ans=ans-d ;
			}
		}
	}
	return 0 ;
}
