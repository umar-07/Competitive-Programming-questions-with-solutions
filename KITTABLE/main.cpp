#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        int count=0;
        for(int i=0; i<n; i++)
        {
            int diff=0;
            if(i==0)
            {
                diff=a[i]-0;
                if(diff>=b[i])
                    count++;
                    continue;
            }
            diff=a[i]-a[i-1];
            if(diff>=b[i])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}
