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
        for(int i=0; i<n; i++)
        {
            if(i!=0)
                cout << ",";
            if((arr[i+1]-arr[i]==1)&&(arr[i+2]-arr[i+1]==1))
            {
                int first=i;
                int last;
                for(int j=i; j<n-1 ; j++)
                {
                    if(arr[j+1]-arr[j]==1)
                        last=j+1;
                    else
                        break;
                }
                cout << arr[first] << "..." << arr[last] ;
                i=last;
                continue;
            }
            else
                cout << arr[i] ;
        }
        cout << endl;
    }
    return 0;
}
