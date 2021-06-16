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
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        if(n==1)
        {
            cout << "1" << endl;
        }
        else if(n==2)
        {
            if(arr[0]==arr[1])
                cout << "2" << endl;
            else
                cout << "1" << endl;
        }
        else
        {
            int h_n[27]={0};
            for(int i=0; i<n; i++)
            {
                h_n[arr[i]]++;
            }
            int flag=0;
            for(int i=1; i<27; i++)
            {
                if(h_n[i]>1)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout << "1" << endl;
            }
            else
            {

        vector <ll> h[27];
        for(int i=0; i<n; i++)
        {
            h[arr[i]].push_back(i);
        }
        vector <ll> m;
        ll maxi=0;
        for(int i=1; i<27; i++)
        {
            if(h[i].size()>0)
                m.push_back(i);
        }
        /*for(int i=0; i<m.size(); i++)
            cout << m[i] << endl;*/
        /*for(int i=1; i<27; i++)
        {
            if(h[i].size()>maxi)
            {
                maxi=h[i].size();
                m.clear();
                m.push_back(i);
                /*cout << "pushed back: " << i << " and maxi = " << maxi << endl;
                cout << "x candidate: " << endl;
                for(auto itr= m.begin(); itr!=m.end(); itr++)
                    cout << *itr << " ";
                cout << endl;
            }
            else if(h[i].size()==maxi && maxi!=0)
            {
                m.push_back(i);
            }
        }*/
        /*cout << "x candidate: " << endl;
        for(auto itr= m.begin(); itr!=m.end(); itr++)
            cout << *itr << " ";
        cout << endl;*/
        ll max_occ=0;
        for(int i=0; i<27; i++)
        {
            if(h[i].size()>max_occ)
                max_occ=h[i].size();
        }
        ll ans=-1;
        for(int i=0; i<m.size(); i++)
        {
            //cout << "step " << i << endl;
            int c = m[i];
            int in_ans=-1;
            for(int k=0; k<h[c].size()-1; k++)
            {
                ll left = k+1;
                ll right = h[c].size() - left;
                //cout << "left & right : " << left << " " << right << endl;
                int max_c=0;
                for(int j=1; j<27; j++)
                {
                    if(c==j)
                        continue;
                    int counti=0;
                    for(int l=0; l<h[j].size(); l++)
                    {
                        if(h[j][l]>h[c][k] && h[j][l]<h[c][k+1])
                            counti++;
                    }
                    if(counti>max_c)
                        max_c=counti;
                }
                //cout << "max found in between " << max_c << endl;
                ll nope =  2*min(left,right) + max_c;
                //cout << "in this case : " << nope << endl;
                if(nope>in_ans)
                    in_ans=nope;
            }
            if(in_ans>ans)
                ans=in_ans;
        }
        //cout << ans << endl;
        ll fin_res = max(ans, max_occ);
        cout << fin_res << endl;
            }
        }
    }
    return 0;
}
