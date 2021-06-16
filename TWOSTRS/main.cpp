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
        for(int i=0; i<n; i++)
        {
            string s;
            int bo;
            cin >> s;
            cin >> bo;
            m[s]=bo;
        }
        /*for(auto itr=m.begin(); itr!=m.end(); itr++)                  //MAKE SEPERATE CASES FOR EMPTY STRING
            cout << itr->first << " " << itr->second << endl;*/
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
        for(int i=x-1; i>=0; i--)
        {
            for(int j=0; j<y; j++)
            {
                string s1 = a.substr(0,i+1);
                int l1 = s1.size();
                string s2 = b.substr(j, (y-j));
                int l2 = s2.size();
                ll sum=0;
                sum=arr1[i]+arr2[j];
                string s = s1+s2;
                ll len=1;
                /*debug(s1) cout << endl;
                debug(s2) cout << endl;
                debug(s) cout << endl;
                cout << "Inside: " << endl;*/
                for(int k=l1-1; k>=0; k--)
                {
                    string ch = s1.substr(k,len);
                    for(int l=0; l<l2; l++)
                    {
                        ch.push_back(s2[l]);
                        //cout << ch << endl;
                        sum+= m[ch];
                    }
                    len++;
                }
                //cout << sum << endl;
                if(sum>maxi)
                    maxi=sum;
                //cout << endl;
            }
        }
        cout << maxi << endl;
    }
	return 0;
}
