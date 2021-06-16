#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n;  i++)
            cin >> arr[i];
        int p=0;
        int flag=-1;
        for(int i=0; i<n;  i++)
        {
            p+=arr[i];
            p-=k;
            if(p<0)
            {
                flag=i;
                break;
            }
        }
        if(flag==-1)
            cout << "YES" << endl;
        else
            cout << "NO " <<  flag+1 << endl;
    }
    return 0;
}
