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
        long long int arr[11]={0};
        for(int i=0; i<n; i++)
        {
            int p, s;
            cin >> p >> s;
            if(arr[p-1]>=s)
                continue;
            else
                arr[p-1]=s;
        }
        long long int sum=0;
        for(int i=0; i<8; i++)
            sum+=arr[i];
        cout << sum << endl;
    }
    return 0;
}
