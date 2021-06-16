#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, marks=0;
        cin >> n;
        char a[n];
        char b[n];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<n; i++)
            cin >> b[i];
        for(int i=0; i<n; i++)
        {
            if(b[i]=='N')
                continue;
            else
            {
                if(b[i]==a[i])
                    marks++;
                else
                {
                    i+=1;
                }
            }
        }
        cout << marks << endl;
    }
    return 0;
}
