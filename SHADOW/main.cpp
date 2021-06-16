#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int i, a, b, l, r;
        cin >> a >> b >> l >> r;
        long long int x, y, m, n, o, p, g, h;
        x=min(l,r);
        y=max(l,r);
        for(i=x; i<=x*2 ; i++)
        {
            if(i%a==0)
            {
                m=i;
                break;
            }
        }
        for(i=y; i>=y/2 ; i--)
        {
            if(i%a==0)
            {
                n=i;
                break;
            }
        }
        long double sum1=0;
        long double term1=(n/a)-(m/a)+1;
        sum1=(term1/2)*(m+n);
        //cout << sum1;
        //first term;
        for(i=x; i<=x*2 ; i++)
        {
            if(i%b==0)
            {
                o=i;
                break;
            }
        }
        for(i=y; i>=y/2 ; i--)
        {
            if(i%b==0)
            {
                p=i;
                break;
            }
        }
        long double sum2=0;
        long double term2=(p/b)-(o/b)+1;
        sum2=(term2/2)*(o+p);
        //cout << sum2;
        //lcm-geeksforgeeks
        long long int lm=max(a,b);
        long long lcm=0;
         do
        {
            if (lm % a == 0 && lm % b == 0)
            {
                lcm=lm;
                break;
            }
            else
                ++lm;
        } while (true);
        //cout << lcm;
        for(i=x; i<=x*2 ; i++)
        {
            if(i%lcm==0)
            {
                g=i;
                break;
            }
        }
        for(i=y; i>=y/2 ; i--)
        {
            if(i%lcm==0)
            {
                h=i;
                break;
            }
        }
        long double sum3=0;
        long double term3=(h/lcm)-(g/lcm)+1;
        sum3=(term3/2)*(g+h);
        //cout << sum3;
        long double ps=sum1+sum2;
        int counti=0;
        long double s1=ps-sum3;
        long double s2=sum3-ps;
        if((fmod(s1,2)==0)||(fmod(s2,2)==0))
            counti++;
        if((fmod(ps,2)==0)||(fmod(ps,3)==0))
            counti++;
        if(counti==0)
            cout << "FAKE LOVE" << endl;
        else if(counti==1)
            cout << "LOVE" << endl;
        else
            cout << "TRUE LOVE" << endl;
    }
    return 0;
}
