#include <bits/stdc++.h>

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
        int b=n;
        while(b>0)
        {
            v.push_back(b%10);
            b=b/10;
        }
        int z=-1;
        vector <int> :: iterator itr;
        //vector <int> :: iterator it;
        auto ita=v.rbegin();
        ita++;
        if(v.size()>1)
        {
            if(*ita==0)
                z=0;
        }
        cout << z << endl;
        if(z==-1)
        {
            int maxi=0;
            for(itr=v.begin(); itr!=v.end(); itr++)
            {
                if(*itr > maxi)
                    maxi=*itr;
            }
            for(itr=v.rbegin(); itr!=v.rend(); itr++)
            {
                if(*itr==maxi)
                {
                    v.erase(itr);
                    break;
                }
            }
            sum=0;
            for(itr=v.rbegin(); itr!=v.rend(); itr++)
            {
                sum=sum*10+(*itr);
            }
            cout << sum << endl;
        }
        else
        {

        }
    }
    return 0;
}
