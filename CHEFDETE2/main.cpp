#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >>n;
    int a[n];
    int b[n+1];
    for(int i=1; i<n+1; i++)
        cin >> a[i];
    for(int j=0; j<n+1; j++)
        b[j]=1;
    for(int i=1; i<n+1; i++)
        b[a[i]]=0;
    for(int i=1; i<n+1; i++)
    {
        if(b[i]==1)
            cout << i << " ";
    }
    return 0;
}
