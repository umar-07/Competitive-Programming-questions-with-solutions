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
        n=n*n;
        if(n<100)
        {
            int j=1;
            for(int i=1; i<=n;)
            {
                int l=j;
                cout << i << "  ";
                for(int k=1; k<n; k++)
                {
                    k=k+l;
                    cout << k << "  ";
                    l++;
                }
                cout << endl;
                i++;
                i=i+j;
                j++;
            }
        }
    }
    return 0;
}
