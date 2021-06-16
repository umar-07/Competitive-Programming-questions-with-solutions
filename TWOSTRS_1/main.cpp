#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    fast_input;
    ll t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        unordered_map <string, int> m;
        ll n;
        cin >> n;
        cout << n << endl;
        for(int i=0; i<n; i++)
        {
            string s;
            int bo;
            cin >> s;
            cin >> bo;
            m[s]=bo;
        }
        cout << "1" << endl;
        for(auto itr=m.begin(); itr!=m.end(); itr++)                  //MAKE SEPERATE CASES FOR EMPTY STRING
            cout << itr->first << " " << itr->second << endl;
        int x=a.size();
        int y=b.size();
        int arr1[x]={0};
        int arr2[y]={0};
        for(int i=0; i<x; i++)
        {
            for(int j=i; j<x; j++)
            {
                string s = a.substr(i, j-i+1);
                auto itr = m.find(s);
                if(itr!=m.end())
                {
                    arr1[j]+=itr->second;
                }
            }
        }
        for(int i=0; i<y; i++)
        {
            for(int j=i; j<y; j++)
            {
                string s = b.substr(i, j-i+1);
                auto itr = m.find(s);
                if(itr!=m.end())
                {
                    arr2[i]+=itr->second;
                }
            }
        }
        cout << "2" << endl;
        for(int i=1; i<x; i++)
        {
            arr1[i]=arr1[i]+arr1[i-1];
        }
        for(int i=y-2; i>=0; i--)
        {
            arr2[i]=arr2[i+1]+arr2[i];
        }
        /*for(int i=0; i<x; i++)
            cout << arr1[i] << " ";
        cout << endl;
        for(int i=0; i<y; i++)
            cout << arr2[i] << " ";
        cout << endl;*/
        ll maxi=0;
        maxi = max(arr1[n-1], arr2[0]);
        int len=1;
        cout << "1" << endl;
        for(int i=x-1; i>=0; i++)
        {
            ll sum=arr1[i];
            string ch=a.substr(i, len);
            for(int j=0; j<y; j++)
            {
                if(j==0)
                {
                    sum+=arr2[j];
                }
                else
                {
                    sum-=arr2[j-1];
                    sum+=arr2[j];
                }
               ch.push_back(b[j]);
               if(m.find(ch)!=m.end())
                    sum+=m[ch];
            }
            if(sum>maxi)
                sum=maxi;
            len++;
        }
        cout << maxi << endl;
    }
	return 0;
}
