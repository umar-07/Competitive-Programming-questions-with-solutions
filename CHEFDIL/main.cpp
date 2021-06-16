#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int sum=0;
        int l=str.size();
        for(int i=0; i<l; i++)
        {
            int k=str[i];
            k=k-48;
            sum+=k;
        }
        if(sum==0)
            cout << "LOSE" << endl;
        else if(sum%2==0)
            cout << "LOSE" << endl;
        else
            cout << "WIN" << endl;
    }
    return 0;
}
