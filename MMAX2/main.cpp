#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int k, s2=0;
        long long rem=0;
        long long div=0;
        cin >> k;
        if(k%n==0)
        {
            if(n==2)
            {
                s2=0;
            }
            else
            {
                s2=k;
            }
        }
        else
        {
            if(n==2)
            {
                s2=1;
            }
            else if(k<n)
            {
                rem=n-k;
                div=min(rem,k);
                s2=2*div;
            }
            else
            {
                s2=k;
            }
        }
        cout << s2 << endl;
    }
    return 0;
}
