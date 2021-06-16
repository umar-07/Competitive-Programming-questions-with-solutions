#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        long long int p[n], s[n];
        p[0]=arr[0];
        for(int i=1; i<n; i++)
        {
            p[i]=p[i-1]+arr[i];
        }
        long long int rev[n];
        for(int i=0; i<n; i++)
        {
            rev[i]=arr[(n-1)-i];
        }
        s[n-1]=rev[0];
        for(int i=1; i<n; i++)
        {
            s[n-1-i]=s[n-i]+rev[i];
        }
        long long int mini = p[0]+s[0];
        long long int indexi=1;
        for(int i=0; i<n; i++)
        {
            if(p[i]+s[i]<mini)
            {
                mini=p[i]+s[i];
                indexi=i+1;
            }
        }
        cout << indexi << endl;
    }
    return 0;
}
