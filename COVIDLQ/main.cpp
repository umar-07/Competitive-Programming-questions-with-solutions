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
        int f=0;
        int c=0;
        for(int i=0; i<n-1; i++)
        {
            int flag=0;
            if(arr[i]==1)
            {
                for(int j=i+1; j<n; j++)
                {
                    if(arr[j]==1)
                    {
                        if(j-i<6)
                        {
                            flag=1;
                            break;
                        }
                    }
                }
            }
            if(flag==1)
            {
                c=1;
                break;
            }
        }
        if(c==1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
