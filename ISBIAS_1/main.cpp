#include <iostream>
#define ll long long int
using namespace std;

int main()
{
    ll n, q;
    cin >> n >> q;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    ll c=0, d=0;
    ll inc[n]={0};
    ll dec[n]={0};
    ll counti=1;
    for(int i=1; i<n; i++)
    {
        if(i==n-1)
        {
            if(arr[i]>arr[i-1])
                c++;
        }
        if(arr[i]>arr[i-1])
            counti++;
        if(arr[i]>arr[i+1] && counti>1)
        {
            counti=1;
            c++;
        }
        inc[i]=c;
    }
    counti=1;
    for(int i=1; i<n; i++)
    {
        if(i==n-1)
        {
            if(arr[i]<arr[i-1])
                d++;
        }
        if(arr[i]<arr[i-1])
            counti++;
        if(arr[i+1]>arr[i] && counti>1)
        {
            d++;
            counti=1;
        }
        dec[i]=d;
    }
    cout << "ARRAY : " << endl;
    for(int i=0; i<n; i++)
        cout << inc[i]<< " ";
    cout << endl;
    for(int i=0; i<n; i++)
        cout << dec[i]<< " ";
    cout << endl;
    while(q--)
    {
        ll l, r;
        cin >> l >> r;
        if(r-l==1)
            cout << "NO" << endl;
        else
        {
            ll inc_count = inc[r-1]-inc[l-1], dec_count=dec[r-1]-dec[l-1];
            cout << "count : inc&dec : " << inc_count << " " << dec_count << endl;
            if(inc_count==dec_count)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
