#include <iostream>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll int n;
        cin >> n;
        ll int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int z=0, w=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0)
                z++;
            if(arr[i]==2)
                w++;
        }
        ll int sum=0;
        if(z>1)
        {
            sum=sum+(((z)*(z-1))/2);
        }
        if(w>1)
        {
            sum=sum+(((w)*(w-1))/2);
        }
        cout << sum << endl;
    }
    return 0;
}
