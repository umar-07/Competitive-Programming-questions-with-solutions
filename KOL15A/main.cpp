#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int sum=0;
        string str;
        cin >> str;
        int l=str.size();
        //cout << l;
        for(int i=0; i<l; i++)
        {
            char c=str[i];
            if((c>=97)&&(c<=122))
                continue;
            else
            {
                int k=c;
                k=k-48;
                //cout << k << endl;
                sum=sum+k;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
