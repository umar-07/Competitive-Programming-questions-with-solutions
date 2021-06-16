#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int arr[n];
        for(int i=0; i<n; i++)
            arr[i]=s[i]-48;
        int head[n];
        head[0]=0;
        int tail[n];
        tail[n-1]=0;
        for(int i=1; i<n; i++)
        {
            if(arr[i-1]==0)
                head[i]=0;
            else
                head[i]=head[i-1]+1;
        }
        for(int i=n-2; i>=0; i--)
        {
            if(arr[i+1]==0)
                tail[i]=0;
            else
                tail[i]=tail[i+1]+1;
        }
        /*for(int i=0; i<n; i++)
            cout << head[i];
        cout << endl;
        for(int i=0; i<n; i++)
            cout << tail[i];
        cout << endl;*/
        int maxi=0;
        for(int i=0; i<=n-k; i++)
        {
            int c = head[i]+k+tail[i+k-1];
            if(c>maxi)
                maxi=c;
        }
        cout << maxi << endl;
    }
    return 0;
}
