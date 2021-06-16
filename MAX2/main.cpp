#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll int n;
    ll int sum=0;
    cin >> n;
    string num;
    cin >> num;
    char p;
    ll int k=n-1, i=0;
    while(k>=0)
    {
        p=num[k];
        int l=((int) p)-48;
        if(l==0)
        {
            k--;
            i++;
            continue;
        }
        else
        {
            sum=sum+(pow(2,i));
            i++;
            k--;
            continue;
        }
    }
    ll int counti=0;
    while(sum>=2)
    {
        if(sum%2!=0)
            break;
        counti++;
        sum=sum/2;
    }
    //cout << sum << endl;
    cout << counti;
    return 0;
}
