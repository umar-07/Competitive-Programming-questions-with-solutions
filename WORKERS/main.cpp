#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    int b[n];
    for(int i=0; i<n; i++)
        cin >> b[i];
    int au=INT_MAX, t=INT_MAX, atr=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(b[i]==1)
        {
            if(a[i]<t)
                t=a[i];
        }
        else if(b[i]==2)
        {
            if(a[i]<au)
                au=a[i];
        }
        else
        {
            if(a[i]<atr)
                atr=a[i];
        }
    }
    if((au==INT_MAX)||(t==INT_MAX))
        cout << atr << endl;
    else
    {
        if(atr > (au+t))
            cout << (au+t) << endl;
        else
            cout << atr << endl;
    }
    return 0;
}
