#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, n, ans;
        cin >> a >> b >> n;
        if(n%2==0)
        {
            long long int c, d;
            c=max(a,b);
            d=min(a,b);
            ans=c/d;
        }
        else
        {
            long long int c, d;
            a=a*2;
            c=max(a,b);
            d=min(a,b);
            ans=c/d;
        }
        cout << ans << endl;
    }
    return 0;
}
