#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int j=min(n,m);
        int mini=(n*m);
        for(int i=1; i<=j; i++)
        {
            if((n*m)%(i*i)==0)
            {
                int a=(n*m)/(i*i);
                if(a<mini)
                {
                    mini=a;
                }
            }
        }
        cout << mini << endl;
    }
    return 0;
}
