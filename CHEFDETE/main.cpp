#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
        int s[n];
        int count=0;
    for(int i=0; i<=n; i++)
    {
        int report=0;
        for(int j=0; j<n; j++)
        {
            if(arr[j]==i)
            {
                report=1;
                break;
            }
        }
        if(report==0)
        {
            s[count]=i;
            count++;
        }
    }
    for(int i=0; i<count; i++)
        cout<<s[i] << " ";
    return 0;
}
