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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll sum=0;
        ll num=1;
        ll inc=1;
        //VERTICAL
        for(int i=2; i<=a; i++)
        {
            num+=inc;
            inc++;
        }
       // cout << num << endl;
        vector <int> v1;
        v1.push_back(num);
        inc=a+1;
        for(int i=2; i<=d; i++)
        {
            num+=inc;
            inc++;
            v1.push_back(num);
        }
        //HORIZONTAL
        num=1;
        inc=2;
        for(int i=2; i<=d; i++)
        {
            num+=inc;
            inc++;
        }
        vector <int> v2;
        v2.push_back(num);
        inc=d;
        for(int i=2; i<=c; i++)
        {
            num+=inc;
            inc++;
            v2.push_back(num);
        }
        //VERTICAL
        /*for(auto i=v1.begin(); i!=v1.end(); i++)
        {
            cout << *i << " " ;
        }
        cout << endl;
        //HORIZONTAL
        for(auto i=v2.begin(); i!=v2.end(); i++)
        {
            cout << *i << " " ;
        }
        cout << endl;*/
        for(int i=b-1; i<d; i++)
        {
            //cout << "adding " << v1[i] << " ";
            sum+=v1[i];
        }
        //cout << endl;
        for(int i=a; i<c; i++)
        {
            //cout << "adding " << v2[i] << " ";
            sum+=v2[i];
        }
        cout << sum << endl;
    }
	return 0;
	//see better solution
}
