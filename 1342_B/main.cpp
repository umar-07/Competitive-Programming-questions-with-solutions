#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll n =s.size();
        if(n==1 || n==2)
            cout << s << endl;
        else
        {
            int zero=0, one=0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='1')
                    one++;
                else
                    zero++;
            }
            if(zero==0 || one==0)
                cout << s << endl;
            else
            {
                string str;
                if(s[0]=='1')
                {
                    int i=1;
                    str.push_back(s[0]);
                    int j=1;
                    while(i!=n)
                    {
                        if(j%2!=0)
                        {
                            if(s[i]=='0')
                            {
                                str.push_back(s[i]);
                                i++;
                                j++;
                                continue;
                            }
                            else
                            {
                                str.push_back('0');
                                j++;
                                continue;
                            }
                        }
                        else
                        {
                            if(s[i]=='1')
                            {
                                str.push_back(s[i]);
                                i++;
                                j++;
                                continue;
                            }
                            else
                            {
                                str.push_back('1');
                                j++;
                                continue;
                            }
                        }
                    }
                }
                else
                {
                    int i=1;
                    str.push_back(s[0]);
                    int j=1;
                    while(i!=n)
                    {
                        if(j%2!=0)
                        {
                            if(s[i]=='1')
                            {
                                str.push_back(s[i]);
                                i++;
                                j++;
                                continue;
                            }
                            else
                            {
                                str.push_back('1');
                                j++;
                                continue;
                            }
                        }
                        else
                        {
                            if(s[i]=='0')
                            {
                                str.push_back(s[i]);
                                i++;
                                j++;
                                continue;
                            }
                            else
                            {
                                str.push_back('0');
                                j++;
                                continue;
                            }
                        }
                    }
                }
                cout << str << endl;
            }
        }
    }
	return 0;
}
