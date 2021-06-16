#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        ll j=0;
        string str=s;
        while(1)
        {
            string v;
            int l = str.size();
            int flag=0;
            int idx=-1;
            for(int i=0; i<l-1; i++)
            {
                if(flag==0 && str[i]=='0' && str[i+1]=='1')
                {
                    flag=1;
                    idx=i+1;
                    i++;
                    continue;
                }
                if(flag==0 && str[i]=='1' && str[i+1]=='0')
                {
                    idx=i+1;
                    flag=1;
                    i++;
                    continue;
                }
                v.push_back(str[i]);
            }
            if(idx!=l-1)
            {
                v.push_back(str[l-1]);
            }
            if(flag==0)
            {
                break;
            }
            str=v;
            j++;
        }

        if(j%2==0)
        {
            cout << "NET" << endl;
        }
        else
            cout << "DA" << endl;
    }
	return 0;
}
