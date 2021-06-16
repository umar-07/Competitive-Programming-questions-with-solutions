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
            cin >> arr[i];
        for(int i=0; i<n; i++)
        {
            arr[i]=abs(arr[i]);
            arr[i]=arr[i]%4;
            if(arr[i]==0)
                arr[i]=4;
        }
        vector <int> v;
        vector <int> f;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==2)
                v.push_back(i);
            if(arr[i]==4)
                f.push_back(i);
        }
        ll c=0;
        for(int i=0; i<v.size(); i++)
        {
            int b=-1, a=-1;
            if(i==0)
            {
                //Back

                int flag=-1;
                for(int j=0; j<f.size(); j++)
                {
                    if(f[j]>v[i])
                        break;
                    flag=f[j];
                }
                if(flag==-1)
                {
                    b=0;
                }
                int flag1=-1;
                for(int j=0; j<f.size(); j++)
                {
                    if(f[j]>v[i])
                    {
                        flag1=f[j];
                        break;
                    }
                }
                if(flag1>v[i+1] && i+1<v.size())
                    flag1=v[i+1];
                if(flag==-1)
                {
                    a=n-1;
                }
                else
                    a=flag1;
                c+= (a-b+1)+1;

            cout << a << " " << b << endl;

                continue;
            }
            int r1=-1;
            //BACK
            if(i-1!=0)
                r1=v[i-1];
            for(int j=0; j<f.size(); j++)
            {
                if(f[j]>v[i])
                    break;
                if(r1<f[j])
                    r1=f[j];
            }
            if(r1==-1)
                b=0;
            else
                b=r1;
            //AFTER
            int r2=-1;
            if(i+1<v.size())
                r2=v[i+1];
            for(int j=0; j<f.size(); j++)
            {
                if(f[j]>v[i] && f[j]<r2)
                {
                    r2=f[j];
                    break;
                }
                if(f[j]>r2)
                    break;
            }
            if(r2==-1)
                a=n-1;
            else
                a=r2;
            c+= (a-b+1)+1;
            cout << a << " " << b << endl;
        }
        ll p = n*(n+1);
        p=p/2;
        ll res = p-c;
        cout << res << endl;
    }
    return 0;
}
