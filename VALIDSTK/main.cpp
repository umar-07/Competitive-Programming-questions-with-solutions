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
        if(arr[0]==0)
            cout << "Invalid" << endl;
        else
        {
            int count=1;
            for(int i=1; i<n; i++)
            {
                if(arr[i]==1)
                    count++;
                else
                    count--;
                if(count<0)
                {
                    cout << "Invalid" << endl;
                    break;
                }
                else
                {
                    continue;
                }
            }
            if(count>=0)
                cout << "Valid" << endl;
        }
    }
    return 0;
}
