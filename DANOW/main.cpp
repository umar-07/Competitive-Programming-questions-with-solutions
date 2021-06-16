#include <iostream>

using namespace std;

int main()
{
    long long int n, q;
    cin >> n >> q;
    long long int a[n], b[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    for(int i=0; i<n; i++)
        cin >> b[i];
    long long int sum[n+1];
    sum[0]=0;
    for(int i=1; i<n+1; i++)
    {
        sum[i]=sum[i-1]+(a[i-1]*b[i-1]);
    }
    while(q--)
    {
        long long int l, r;
        cin >> l >> r;
    long long int ans;
    ans=(sum[r]-sum[l-1]);
        cout << ans << endl;
    }
    return 0;
}
