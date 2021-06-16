#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
    string str;
    cin >> str;
    int m;
    cin >> m;
    vector <int> v;
    for(int i=1; i<=str.size(); i++)
    {
        if(str[i-1]=='1')
            v.push_back(i);
    }
    sort(v.begin(), v.end());
    /*for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    cout << endl;*/
    if(v.size()==0)
    {
        cout << "NO" << endl;
        return 0;
    }
    if(m==1 && v.size()==1)
    {
        cout << "YES" << endl;
        cout << v[0] << endl;
        return 0;
    }
    if(v.size()==1)
    {
        cout << "NO" << endl;
        return 0;
    }
    ll a=0, b=0;
    int min_diff=INT_MAX;
    int n = v.size();
    for(int i=0; i<n-1; i++)
    {
        int diff=0;
        for(int j=i+1; j<n; j++)
        {
            diff=v[j]-v[i];
            if(diff<min_diff)
            {
                min_diff=diff;
                a=v[i];
                b=v[j];
                continue;
            }
            else if(diff==min_diff)
            {
                if(v[i]>a)
                {
                    a=v[i];
                    b=v[j];
                    continue;
                }
            }
        }
    }
    //debug(a);
    //debug(b);
	vector <int> res;
	res.push_back(a);
	res.push_back(b);
	if(m<=2)
    {
        cout << "YES" << endl;
        for(int i=0; i<res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
    else
    {
        ll x=2;
        int flag=0;
        int prev_a=a, prev_b=b;
        while(x<m)
        {
            if(flag==1)
                break;
            int post=0;
            int diff=INT_MAX;
            int curr_a, curr_b;
            for(int i=0; i<n; i++)
            {
                if(v[i]==prev_b)
                    continue;
                for(int j=0; j<n; j++)
                {
                    if(i==j)
                        continue;
                    int new_diff = abs((a+v[i])-(b+v[j]));
                    if(new_diff<diff && (b+v[j])>(a+v[i]) && (a+v[i])>b)
                    {
                        //debug(x);
                       // debug(a);
                       // debug(b);
                       // debug(new_diff);
                       // cout << endl;
                        post=1;
                        curr_a=v[i];
                        curr_b=v[j];
                        diff=new_diff;
                    }
                }
            }
            if(post==0)
            {
                flag=1;
                break;
            }
            a=a+curr_a;
            b=b+curr_b;
            res.push_back(curr_a);
            res.push_back(curr_b);
            prev_a=curr_a;
            prev_b=curr_b;
            x+=2;
        }
        //ADD CASE of +1
        /*for(int i=0; i<res.size(); i++)
            cout << res[i] << " ";*/
            if(res.size()>=m)
            {
                cout << "YES" << endl;
                for(int i=0; i<m; i++)
                    cout << res[i] << " ";
                cout << endl;
            }
            else
            {
                for(int i=0; i<n; i++)
                {
                    if(v[i]!=prev_b && v[i]+a>b)
                    {
                        res.push_back(v[i]);
                    }
                }
                if(res.size()>=m)
                {
                    cout << "YES" << endl;
                    for(int i=0; i<m; i++)
                        cout << res[i] << " ";
                    cout << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
    }
	return 0;
}
