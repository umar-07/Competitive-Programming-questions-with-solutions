#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[n];
        char typeo='K';
        for(int j=0; j<n; j++)
        {
            if(arr[j]=='I')
            {
                typeo='I';
                break;
            }
            else if(arr[j]=='Y')
            {
                typeo='Y';
                break;
            }
            cout << typeo;
        }
        if(typeo=='Y')
        {
            cout << "NOT INDIAN" << endl;
        }
        else if(typeo=='I')
        {
            cout << "INDIAN" << endl;
        }
        else
            cout << "NOT SURE" << endl;

    }
    return 0;
}
