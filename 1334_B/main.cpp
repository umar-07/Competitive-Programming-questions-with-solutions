#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        double x;
        cin >> n >> x;
        ll arr[n];
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            sum+=arr[i];
        }
        sort(arr, arr+n);
        double avg = (sum*1.0)/(n*1.0);
        //cout << "sum and avg : " << sum << " " << avg << endl;
        double c= (n*1.0);
        int i=0;
        while(avg<x)
        {
            if(i==n)
                break;
            avg = avg*c;
            avg-=arr[i];
            c=c-(1.0);
            avg = avg/c;
            //cout << "after i operation: " << i << " c: " << c << " avg: " << avg << endl;
            i++;
        }
        if(i==n && avg<x)
            cout << "0" << endl;
        else
            cout << c << endl;
    }
    return 0;
}
