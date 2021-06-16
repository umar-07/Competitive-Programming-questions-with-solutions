#include <iostream>

using namespace std;

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int c1=0, c2=0;
    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            c2++;
        }
        else
            c1++;
    }
    if(c2>c1)
    cout << "READY FOR BATTLE" << endl;
    else
    cout << "NOT READY" << endl;
    return 0;
}
