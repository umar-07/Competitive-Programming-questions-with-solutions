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
        int a[n], b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        int fronti=0, backi=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]>b[i])
            {
                fronti=1;
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(b[i]<a[(n-1)-i])
            {
                backi=1;
                break;
            }
        }
        if((fronti==1)&&(backi==1))
            cout << "none" << endl;
        if((fronti==1)&&(backi==0))
            cout << "back" << endl;
        if((fronti==0)&&(backi==1))
            cout << "front" << endl;
        if((fronti==0)&&(backi==0))
            cout << "both" << endl;
    }
    return 0;
}
