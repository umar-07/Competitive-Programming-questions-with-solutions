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
        cin.sync();
        char ans[n];
        char ch[n];
        int w[n+1];
        int right=0;
        for(int i=0; i<n; i++)
            cin >> ans[i];
        cin.sync();
        for(int i=0; i<n; i++)
        {
            cin >> ch[i];
            if(ch[i]==ans[i])
                right++;
        }
        cin.sync();
        for(int i=0; i<n+1; i++)
            cin >> w[i];
        if(right==n)
            cout << w[n] << endl;
        else
        {
            int maxi=w[0];
            for(int i=1; i<=right; i++)
            {
                if(w[i]>maxi)
                    maxi=w[i];
            }
            cout << maxi << endl;
        }
    }
    return 0;
}
