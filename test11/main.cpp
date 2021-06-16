#include <bits/stdc++.h>

using namespace std;

int main()
{
    char arr[10000];
    cin >> arr;
    cin.sync();
    int l=0;
    for(int i=0; ; i++)
    {
        if(arr[i]=='\n')
            break;
        l++;
    }
    cout << l;
    return 0;
}
