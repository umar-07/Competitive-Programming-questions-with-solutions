#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        int sum=a+b;
        int counti=0;
        int arr[10]={6,2,5,5,4,5,6,3,7,6};
        while(sum>0)
        {
            counti+=arr[sum%10];
            sum=sum/10;
        }
        cout << counti << endl;
    }
    return 0;
}
