#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        vector <int> v;
        vector <int> :: iterator itr;
        for(int i=0; i<s.size(); i++)
            v.push_back(s[i]-48);
        int flag=0;
        for(itr=v.begin(); itr!=v.end(); itr++)
        {
            if((*itr)!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout << "red" << endl;
        else
        {
            int z=0, t=0, sum=0;
            for(itr=v.begin(); itr!=v.end(); itr++)
            {
                if((*itr)==0)
                    z++;
                else if((*itr)%2==0)
                    t++;
                sum+=(*itr);
            }
            if(sum%3==0)
            {
                if(z>1)
                    cout << "red" << endl;
                else if((z>=1)&&(t>=1))
                    cout << "red" << endl;
                else
                    cout << "cyan" << endl;
            }
            else
                cout << "cyan" << endl;
        }
    }
    return 0;
}
