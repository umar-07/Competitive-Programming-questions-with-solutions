#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int h[8001]={0};
        for(int i=0; i<n; i++)
            h[arr[i]]++;
        int pre[n+1];
        pre[0]=0;
        for(int i=0; i<n; i++)
        {
            pre[i+1]=pre[i]+arr[i];
        }
        //for(int i=0; i<n+1; i++)
        //    cout << pre[i] << " ";
        int sum=0;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+2; j<n+1; j++)
            {
                int k = pre[j]-pre[i];
                if(h[k]==0)
                    continue;
                else
                {
                    sum+=h[k];
                    h[k]=0;
                }
            }
        }
        cout << sum << endl;
    }
	return 0;
}
