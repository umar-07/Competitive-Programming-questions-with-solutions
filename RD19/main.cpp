#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector <int> v;
        for(int i=0; i<n; i++)
        {
            int input;
            cin >> input;
            v.push_back(input);
        }
        int counti=n, del=0;
        for(int j=0; j<n; j++)
        {
            for(int i=j+1; i<n; i++)
            {
                if(counti==1)
                    break;
                int l=__gcd(v[i], v[j]);
                if(l!=1)
                {
                    del++;
                    v.erase(v.begin()+i);
                    counti--;
                }
            }
            if(counti==1)
                break;
        }
        if(counti==1)
            cout << "-1" << endl;
        else
            cout << del << endl;
    }
    return 0;
}
