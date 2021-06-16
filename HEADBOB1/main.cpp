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
        char arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int type=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]=='I')
            {
                type=1;
                break;
            }
            if(arr[i]=='Y')
            {
                type=2;
                break;
            }
           // cout << type;
        }
        if(type==1)
            cout<< "INDIAN" << endl;
        else if(type==2)
            cout << "NOT INDIAN" << endl;
        else
            cout << "NOT SURE" << endl;
    }
    return 0;
}
