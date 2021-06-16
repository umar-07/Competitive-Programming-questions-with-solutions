#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[m];
        int h[n+1]={0};
        for(int i=0; i<m; i++)
            cin >> arr[i];
        int flag=0;
        for(int i=0; i<m; i++)
        {
            if((i+1)%n==0)
            {
                for(int j=0; j<n; j++)
                    h[i]=0;
            }
            h[arr[i]]++;
            if(h[arr[i]]>1)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
