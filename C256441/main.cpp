#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr+3);
    if(arr[0]==1)
        cout << "YES" << endl;
    else if((arr[0]==2) && (arr[1]==2))
        cout << "YES" << endl;
    else if((arr[0]==2)&&(arr[1]==4)&&(arr[2]==4))
        cout << "YES" << endl;
    else if ((arr[0]==3)&&(arr[1]==3)&&(arr[2]==3))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
