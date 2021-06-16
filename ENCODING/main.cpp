#include <bits/stdc++.h>

#define m 1000000007

using namespace std;

int countDigit(long long n)
{
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int l, r;
        int nl, nr;
        cin >> nl >> l >> nr >> r;
        long long int sum=0;
        for(long long int i=l; i<=r; i++)
        {
            int j=i;
            int digit=countDigit(j);
            int k=digit;
            vector <int> a;
            while(k--)
            {
                a.push_back(j%10);
                j=j/10;
            }
            /*cout << digit << endl;
            for(int h=0; h<digit; h++)
                cout << a[h] << " " ;*/
            k=digit;
            int it=digit-1, p=digit-1;
            while(it>=0)
            {
                sum=(sum*10+a[it])%m;
                if(it!=0)
                    {
                        if(a[it]==a[it-1])
                        {
                            while(1)
                            {
                                if(a[it]==a[it-1])
                                    {
                                        sum=(sum*10)%m;
                                        it--;
                                    }
                                else
                                    break;
                            }
                        }
                    }
                it--;
            }
            sum=sum%m;
        }
        cout << sum << endl;
    }
    return 0;
}
