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
        int odd[n];
        int counti=0;
        for(int i=n-1; i>=0; i--)
        {
            if(arr[i]%2!=0)
            {
                counti++;
                odd[i]=counti;
            }
            else
            {
                odd[i]=counti;
            }
        }
        //for(int i=0; i<n; i++)
            //cout << odd[i] << " " ;
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
                sum=sum+odd[i];
        }
        cout << sum << endl;
    }
    return 0;
}
