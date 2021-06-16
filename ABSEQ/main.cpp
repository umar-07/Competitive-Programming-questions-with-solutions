#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag1=0, flag2=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='a')
            flag1=1;
        else
            flag2=1;
    }
    if((flag1==0)||(flag2==0))
        cout << n << endl;
    else
    {
        vector <char> v;
        vector <char> :: iterator itr;
        vector <char> :: iterator itr1;
        for(int i=0; i<n; i++)
            v.push_back(s[i]);
        int res=n;
        int i=0, j=0;
        for(itr=v.begin(); itr!=(v.end()-1); itr++)
        {
            if(itr1 == v.end()-1)
                break;
            if((*itr == 'a') && ( *(itr+1)=='b'))
            {
                vector <char> :: iterator itr2 = itr+1;
                vector <char> :: iterator itr3 = itr;
                v.erase(itr3);
                v.erase(itr2);
                itr--;
                continue;
            }
            if((*itr)=='a')
            {
                for(itr1=itr+1; itr1!=v.end()-1; itr1++)
                {
                    if((*itr1 == 'a') && ( *(itr1+1)=='b'))
                    {
                        vector <char> :: iterator itr4 = itr1+1;
                        vector <char> :: iterator itr5 = itr1;
                        v.erase(itr4);
                        v.erase(itr5);
                        itr1=itr;
                        continue;
                    }
                }
            }
        }
        cout << v.size() << endl;
    }
    return 0;
}
