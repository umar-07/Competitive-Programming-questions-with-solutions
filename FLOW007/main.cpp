#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        int a=n, num=0, rem, counti=0;
        while(a>0)
        {
            a=a/10;
            counti++;
        }
        a=n;
        while(a>0)
        {
            rem=a%10;
            num=num+rem*pow(10,(counti-1));
            counti--;
            a=a/10;
        }
        cout << num << endl;
    }
    return 0;
}
