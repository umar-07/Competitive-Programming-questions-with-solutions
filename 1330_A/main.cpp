#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        int arr[n];
        int h[250]={0};
        for(int i=0; i<n; i++)
        {
                cin >> arr[i];
                h[arr[i]]=1;
        }
        int v=0;
        for(int i=1; i<250; i++)
        {
            if(h[i]==1)
            {
                v++;
                continue;
            }
            if(h[i]==0 && x>0)
            {
                x--;
                v++;
                continue;
            }
            if(h[i]==0 && x<=0)
                break;
        }
        cout << v << endl;
    }
    return 0;
}
