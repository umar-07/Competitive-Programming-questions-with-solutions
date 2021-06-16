#include <bits/stdc++.h>
#define ll long long


using namespace std;

bool sortbysec(const pair<ll int,ll int> &a,
              const pair<ll int,ll int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int t;
    cin >> t;
    while(t--)

    {
        ll int ch=0;
        ll int n;
        cin >> n;
        ll int a[n];
        ll int b[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            cin >> b[i];
        }
        vector < pair <ll int, ll int> > v;
        for(int i=0; i<n; i++)
        {
            v.push_back(make_pair(a[i], b[i]));
        }
        sort(v.begin(), v.end());
        vector< pair <ll int, ll int> > :: iterator it1;
        vector< pair <ll int, ll int> > :: iterator it2;
        for(it1=v.begin(); it1!=v.end(); it1++)
        {
            if(it1 == v.end()-1)
                break;
            int fl=0;
            for(it2=it1+1; it2!=v.end(); it2++)
            {
                if((*it2).first == (*it1).first)
                {
                    fl=1;
                    continue;
                }
                else
                    break;
            }
            if(fl==1)
            {
                sort(it1, it2, sortbysec);
            }
            it1=it2-1;
        }
        ll int found=0;
        ll int mini=INT_MAX;
        pair <ll int, ll int> p1;
        pair <ll int, ll int> p2;
        vector< pair <ll int, ll int> > :: iterator itr;
        vector< pair <ll int, ll int> > :: iterator itr2;
        vector < pair <ll int, ll int> > s1;
        vector < pair <ll int, ll int> > s2;
        //for(itr=v.begin(); itr!=v.end(); itr++)
          //  cout << (*itr).first << " " << (*itr).second << endl;
        if(n==1)
            {
                cout << "-1" << endl;
                ch=1;
            }
        else if(n==2)
        {
            if(v[0].second<v[1].first)
                cout << "0" << endl;
            else
                cout << "-1" << endl;
            ch=1;
        }
        else
        {
            ll int flag=0;
            for(itr=v.begin(); itr!=(v.end()-1); itr++)
            {
                if((*itr).second<(*(itr+1)).first)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                {
                    cout << "0" << endl;
                    ch=1;
                }
            else
            {
                vector< pair <ll int, ll int> > :: iterator itr3=v.begin();
                vector< pair <ll int, ll int> > :: iterator itr4=v.end()-1;
                if((*itr3).second>=(*itr4).first)
                    {
                        cout << "-1" << endl;
                        ch=1;
                    }
                else
                {
                    ll int f=0;
                    vector< pair <ll int, ll int> > :: iterator itr5;
                    vector< pair <ll int, ll int> > :: iterator itr6;
                    for(itr6=v.begin(); itr6!=(v.end()-1); itr6++)
                    {
                        ll int counti=0;
                        for(itr5=itr6+1; itr5!=v.end(); itr5++)
                        {
                            if((*itr6).second<(*itr5).first)
                            {
                                //cout << "encountered subset : " << (*itr6).first << " " << (*itr6).second << " and " << (*itr5).first << " " << (*itr5).second << " count: " << counti << endl;
                                if(counti<mini)
                                {
                                    mini=counti;
                                    f=1;
                                }
                                counti=0;
                                break;
                            }
                            counti++;
                        }
                    }
                    if(f==0)
                        cout << "-1" << endl;
                    else
                        cout << mini << endl;
                    ch=1;
                }
            }
        }
        if(ch==0)
            cout << "-1" << endl;
    }
    return 0;
}
