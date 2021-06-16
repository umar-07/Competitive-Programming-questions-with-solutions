#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        n=n-1;
        long long int div=n/26;
        long long int rem=n%26;
        long long int pop = pow(2,div);
        if((rem>=0)&&(rem<2))
            cout << pop << " 0 0" << endl;
        else if((rem>=2)&&(rem<10))
            cout << "0 " << pop << " 0" << endl;
        else
            cout << "0 0 " << pop << endl;
    }
    return 0;
}
