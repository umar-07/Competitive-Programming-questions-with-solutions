#include <bits/stdc++.h>

using namespace std;

unsigned int countSetBits(unsigned int n)
{
unsigned int count = 0;
while (n)
{
    count += n & 1;
    n >>= 1;
}
return count;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int q;
        cin >> q;
        long long s[1000]={0};
        int counti=0;
        while(q--)
        {
            int x;
            cin >> x;
            int found=0;
            if(counti!=0)
            {
                for(int i=0; i<counti; i++)
                    {
                        if(s[i]==x)
                        {
                            found=1;
                            break;
                        }
                    }
            }
            if(found==1)
                break;
            s[counti]=x;
            counti++;
            if(counti!=1)
            {
                int k=counti-2;
                for(int i=k; i>=0; i--)
                {
                    found=0;
                    int r=x^s[i];
                    for(int i=0; i<counti-1; i++)
                    {
                        if(r==s[i])
                            found=1;
                    }
                    if(found==1)
                        continue;
                    else
                    {
                        s[counti]=(x^s[i]);
                        counti++;
                    }
                }
            }
            int e=0, o=0;
            for(int i=0; i<counti; i++)
            {
                int p=countSetBits(s[i]);
                if(p%2==0)
                    e++;
                else
                    o++;
            }
            cout << e << "  " << o << endl;
        }
    }
    return 0;
}
