#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            arr[i]=abs(arr[i]);
            arr[i]=arr[i]%4;
            if(arr[i]==0)
                arr[i]=4;
        }
        int flag=0;
        vector < pair<int,int> > v;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==2)
                {
                    flag=1;
                    v.push_back(make_pair(i, 2));
                }
            if(arr[i]==4)
                v.push_back(make_pair(i, 4));
        }
        if(flag==0)
            cout << ((n)*(n+1))/2 << endl;
        else if(v.size()==1 && v[0].second==2)
        {
            int k =v[0].first;
            ll b = k-0;
            ll a = n-k;
            ll p = (b*a)+a;
            ll op = ((n)*(n+1))/2;
            ll res = op-p;
            cout << res << endl;
        }
        else
        {
            ll c=0;
            for(int i=0; i<v.size(); i++)
            {
                ll a, b;
                if(v[i].second==2)
                {
                    if(i==0)
                    {
                        b=v[i].first-0;
                        a=v[i+1].first-v[i].first;
                        /*cout << "v[i]: " << v[i].first << endl;
                        cout << "statement 1" << endl;
                        cout << "a: " << a << " b: " << b << endl;
                        cout << "c: " << c << endl;*/
                        c+= ((b*a)+a);
                        continue;
                    }
                    else if(i==v.size()-1)
                    {
                        a=n-v[i].first;
                        b=v[i].first-v[i-1].first-1;
                        c+= ((b*a)+a);
                        /*cout << "v[i]: " << v[i].first << endl;
                        cout << "statement 2" << endl;
                        cout << "a: " << a << " b: " << b << endl;
                        cout << "c: " << c << endl;*/
                        continue;
                    }
                    b=v[i].first-v[i-1].first-1;
                    a=v[i+1].first-v[i].first;
                    c+= ((b*a)+a);
                    /*cout << "v[i]: " << v[i].first << endl;
                    cout << "statement 3" << endl;
                    cout << "a: " << a << " b: " << b << endl;
                    cout << "c: " << c << endl;*/
                    continue;
                }
            }
            ll p = (n*(n+1))/2;
            ll res = p -c;
            cout << res << endl;
        }
    }
    return 0;
}
