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
        int counti=0;
        for(int i=0; i<n; i++)
        {
            int check=0;
            for(int j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    check=1;
                }
            }
            if(check==0)
                counti++;
        }
        cout << counti << endl;
    }
    return 0;
}
