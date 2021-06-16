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
        int counti=1;
        for(int i=1; i<n; i++)
        {
            int k=5;
            int flag=0;
            for(int j=i-1; ; j--)
            {
                if(arr[j]<=arr[i])
                {
                    flag=1;
                    break;
                }
                if((k==1)||(j==0))
                    break;
                k--;
            }
            if(flag==0)
                counti++;
//            cout << "count " << counti << endl;
        }
        cout << counti << endl;
    }
    return 0;
}
