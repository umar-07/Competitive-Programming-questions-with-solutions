#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m1=0, m2=0, i1=0, i2=0;
        cin >> n;
        int a[n], b[n];
        for(int i=0; i<n; i++)
            {
                cin >> a[i];
                if(m1<a[i])
                {
                    m1=a[i];
                    i1=i;
                }
            }
        for(int i=0; i<n; i++)
            {
                cin >> b[i];
                if(m2<b[i])
                {
                    m2=b[i];
                    i2=i;
                }
            }
        a[i1]=0;
        b[i2]=0;
        int s1=0, s2=0;
        for(int i=0; i<n; i++)
        {
            s1+=a[i];
            s2+=b[i];
        }
        if(s1>s2)
            cout << "Bob" << endl;
        else if(s2>s1)
            cout << "Alice" << endl;
        else
            cout << "Draw" << endl;
    }
    return 0;
}
