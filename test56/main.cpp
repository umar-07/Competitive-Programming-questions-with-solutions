#include <iostream>

using namespace std;

int main()
{
    char arr[10000];
    cin >> arr;
    cin.sync();
    int l=0;
    for(int i=0; ; i++)
    {
        if(arr[i]=='\0')
            break;
        l++;
    }
    cout << l;
    return 0;
}
