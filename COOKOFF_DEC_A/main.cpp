#include <iostream>

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
        int h[101]={0};
        for(int i=0; i<n; i++)
            h[arr[i]]++;
        int maxi=0;
        int index;
        for(int i=0; i<=100; i++)
        {
            if(h[i]>maxi)
                maxi=h[i];
        }
        cout << n-maxi << endl;
    }
    return 0;
}
