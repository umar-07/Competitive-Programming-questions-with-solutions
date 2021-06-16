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
        {
            cin  >> arr[i];
        }
        int five=0, fail=0;
        double avg=0;
        for(int i=0; i<n; i++)
        {
            avg+=arr[i];
            if(arr[i]==5)
                five=1;
            if(arr[i]==2)
                fail=1;
        }
        double k = n;
        avg=avg/k;
        if((fail==0)&&(five==1)&&(avg>=4))
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
