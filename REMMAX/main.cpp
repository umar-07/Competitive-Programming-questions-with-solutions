#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int maxi=1, index=1;
        for(int i=1; i<=n; i++)
        {
            int k=i, rem, rev=0;
            while(k!=0)
            {
                rem=k%10;
                rev=rev*10+rem;
                k=k/10;
            }
            if(rev>maxi)
            {
                maxi=rev;
                index=i;
            }
        }
        cout << index << endl;
    }
    return 0;
}
