#include <bits/stdc++.h>

using namespace std;

long long int fibo(long long int n)
{
    long long int f[60]={0};
    f[0]=0;
    f[1]=1;
    for(int i=2; i<60; i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
    for(int i=0; i<60; i++)
        f[i]=f[i]%10;
    /*for(int i=0; i<60; i++)
        cout << f[i] << " ";*/
    long long int b = n%60;
    //cout << b-1 << endl;
    return f[b-1];
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double n;
        cin >> n;
        double store= log2(n);
        long long int y = (long long int) store;
        //cout << store << endl;
        //cout << y << endl;
        long long int k = (long long int)(pow(2,y)+0.5);
        //cout << k << endl;
        cout<<fibo(k)<< endl;
    }
    return 0;
}
