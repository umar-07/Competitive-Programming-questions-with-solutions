#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long int k, s2=0;
        long long rem=0;
        long long div=0, l=0;
        cin >> n >> k;
        if(n==2)
        {
            if(k%2==0)
                s2=0;
            else
                s2=1;
        }
        else if(n%2!=0)
        {
            if(k<n)
            {
                rem=n-k;
                div=min(rem,k);
                s2=div*2;
            }
            else if(k%n==0)
            {
                if(k/n==1)
                    s2=0;
                else if(k%2==0)
                    s2=k;
                else if(k%2!=0)
                {
                    if(k>=(n*n))
                        s2=0;
                    else
                    {
                        l=k/n;
                        rem=n-l;
                        div=min(rem,l);
                        s2=n*div*2;
                    }
                }
            }
            else if(k>n)
            {
                s2=k;
            }
        }
        else if(n%2==0)
        {
            if(k<n)
            {
                if(n/k==2)
                {
                    s2=n-1;
                }
                else
                {
                    rem=n-k;
                    div=min(rem,k);
                    s2=div*2;
                }
            }
            else if(k%n==0)
            {
                s2=k;
            }
            else if(k>n)
            {
                s2=k;
            }
        }
        cout << s2 << endl;
    }
    return 0;
}
