#include <iostream>

using namespace std;

int main()
{
    int k, t;
    cin >>t;
    for(k=0; k<t; k++)
    {
        int i, j, n;
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int a, b, c, d, e;
        a=arr[3]-arr[2];
        b=arr[2]-arr[1];
        c=arr[1]-arr[0];
        d=(arr[2]-arr[0])/2;
        e=(arr[3]-arr[1])/2;
        cout << a;
        cout << b;
    }
    return 0;
}
