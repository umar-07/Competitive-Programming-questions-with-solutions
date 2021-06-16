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
        ll a, b, c;
        cin >> a >> b >> c;
        string s;
        int flag=0;
        if(a==0 && c==0 && b%2==0)
        {
            int x=0;
            cout << "0";
            for(int i=0; i<b; i++)
            {
                if(i%2==0)
                    cout <<"1";
                else
                    cout << "0";
            }
            cout << endl;
            continue;
        }
        if(a!=0)
        {
            for(int i=0; i<=a; i++)
                cout << "0";
            flag=1;
        }
        if(flag==1 && b!=0)
        {
            int x=0;
            cout << "1";
            x=1;
            while(x<b)
            {
                cout << "0";;
                cout << "1";
                x+=2;
            }
            flag=1;
        }
        else if(flag==0 && b!=0)
        {
            if(b%2!=0)
            {
                int x=0;
            if(b!=0)
            {
                cout << "0";;
                cout << "1";
            }
            x=1;
            while(x<b)
            {
                cout << "0";;
                cout << "1";
                x+=2;
            }
            flag=1;
            }
            else
            {
                int x=0;
                while(x<b)
                {
                    cout << "1";
                    cout << "0";
                    x+=2;
                }
            }
        }
        ll l = s.size();
        if(flag==0)
        {
            for(int i=0; i<=c; i++)
                cout << "1";
        }
        else
        {
            for(int i=0; i<c; i++)
                cout << "1";
        }
        cout << endl;
    }
	return 0;
}
