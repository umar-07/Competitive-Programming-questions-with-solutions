#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int h[100001]={0};
    for(int i=1; i<100001; i++)
    {
        if(__builtin_popcount(i)%2==0)
            h[i]=0;
        else
            h[i]=1;
    }
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        int even=0, odd=0;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(__builtin_popcount(arr[i])%2==0)
                even++;
            else
                odd++;
        }
        while(q--)
        {
            int p;
            cin >> p;
            if(h[p]==0)
                cout << even << " " << odd << endl;
            else
                cout << odd << " " << even << endl;
        }
    }
    return 0;
}
