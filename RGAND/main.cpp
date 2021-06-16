#include <bits/stdc++.h>
#define ll long long int
#define m 1000000007

using namespace std;

bool isPowerOfTwo(ll x)
{
    if(__builtin_popcountll(x)==1)
        return true;
    return false;
}

int power(ll x)
{
    int counti=0;
    while(x)
    {
        x = x >> 1;
        counti++;
    }
    return (counti-1);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll l, r, flag=0, sum=0;
        cin >> l >> r;
        if(isPowerOfTwo(l))
            flag=1;
        if(flag==1)
        {
            ll n = power(l);
            //cout << n << endl;
            ll next_num = 1LL << (n+1);
            if(r>=next_num)
                sum = ((l%m)*((next_num - l)%m))%m;
            else
                sum = ((l%m)*((r-l+1)%m))%m;
        }
        else
        {
            ll n = power(l) + 1;
            ll next_num = 1LL << (n+1);
            vector <int> v;
            vector <int> :: iterator itr;
            ll p = l;
            while(p)
            {
                if(p&1)
                    v.push_back(1);
                else
                    v.push_back(0);
                p = p >> 1;
            }
            //for(itr=v.begin(); itr!=v.end(); itr++)
            //    cout << *itr << " ";
            //cout << endl;
            reverse(v.begin(), v.end());
            int c=0;
            for(itr=v.begin(); itr!=v.end(); itr++)
            {
                if(*itr==1)
                    c++;
                else
                    break;
            }
            ll total_bit = power(l);
            ll new_num=0;
            int f=c;
            while(f--)
            {
                ll here = 1LL << total_bit;
                new_num = new_num + here;
                total_bit--;
            }
            if(r>=next_num)
            {
                sum = ((new_num%m)*((next_num-l)%m))%m;
            }
            else
            {
                sum = ((new_num%m)*((r-l+1)%m))%m;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
