#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    reverse(str.begin(), str.end());
    //cout << str;
    int low=-1;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='1')
            {
                low=i;
                break;
            }
    }
    cout << low << endl;
    return 0;
}
