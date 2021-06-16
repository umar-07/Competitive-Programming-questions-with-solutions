#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

ll fun(ll n, ll m, vector <pair<ll, ll> > x)
{
        ll y_left[m];
        y_left[0]=x[0].second;
        for(int i=1; i<m; i++)
        {
            y_left[i]=max(y_left[i-1], x[i].second);
        }
        ll y_left_down[m];
        y_left_down[0]=x[0].second;
        for(int i=1; i<m; i++)
        {
            y_left_down[i]=min(y_left_down[i-1], x[i].second);
        }
        //Right
        ll y_right[m];
        y_right[m-1]=x[m-1].second;
        for(int i=m-2; i>=0; i--)
        {
            y_right[i]=max(y_right[i+1], x[i].second);
        }
        ll y_right_down[m];
        y_right_down[m-1]=x[m-1].second;
        for(int i=m-2; i>=0; i--)
        {
            y_right_down[i]=min(y_right_down[i+1], x[i].second);
        }
        /*cout << "Left_UP" << endl;
        for(int i=0; i<m; i++)
            cout << y_left[i] << " ";
        cout << endl;
        cout << "Left_DOWN" << endl;
        for(int i=0; i<m; i++)
            cout << y_left_down[i] << " ";
        cout << endl;
        cout << "Right_UP" << endl;
        for(int i=0; i<m; i++)
            cout << y_right[i] << " ";
        cout << endl;
        cout << "Right_DOWN" << endl;
        for(int i=0; i<m; i++)
            cout << y_right_down[i] << " ";
        cout << endl;
        cout << endl;*/
        ll mini=INT_MAX;
        for(int i=0; i<m-1; i++)
        {
            int j=i+1;
            for(; j<n; j++)
            {
                if(x[i].first!=x[j].first)
                    break;
            }
            i=j-1;
            if(x[i].first==x[j].first || j==m)
                break;
            //cout << i << endl;
            //cout << "Rect 1: " << x[0].first << " till " << x[i].first << " with y axis: " << y_left[i]-y_left_down[i] << endl;
            //cout << "Rest 2: " << x[i+1].first << " till " << x[m-1].first << " with y axis: " << y_right[i+1]-y_right_down[i+1] << endl;
            ll area = (x[i].first-x[0].first)*(y_left[i]-y_left_down[i]);
            //cout << "area1: " << area << " ";
            area+= (x[m-1].first-x[i+1].first)*(y_right[i+1]-y_right_down[i+1]);
            //cout << "area2: " << (x[m-1].first-x[i+1].first)*(y_right[i+1]-y_right_down[i+1]) << endl;
            //cout << endl;
            if(area<mini)
                mini=area;
        }
        return mini;
}

ll fun2(ll n, ll m, vector <pair<ll, ll> > x)
{
        ll y_left[m];
        y_left[0]=x[0].second;
        for(int i=1; i<m; i++)
        {
            y_left[i]=max(y_left[i-1], x[i].second);
        }
        ll y_left_down[m];
        y_left_down[0]=x[0].second;
        for(int i=1; i<m; i++)
        {
            y_left_down[i]=min(y_left_down[i-1], x[i].second);
        }
        //Right
        ll y_right[m];
        y_right[m-1]=x[m-1].second;
        for(int i=m-2; i>=0; i--)
        {
            y_right[i]=max(y_right[i+1], x[i].second);
        }
        ll y_right_down[m];
        y_right_down[m-1]=x[m-1].second;
        for(int i=m-2; i>=0; i--)
        {
            y_right_down[i]=min(y_right_down[i+1], x[i].second);
        }
        /*cout << "Left_UP" << endl;
        for(int i=0; i<m; i++)
            cout << y_left[i] << " ";
        cout << endl;
        cout << "Left_DOWN" << endl;
        for(int i=0; i<m; i++)
            cout << y_left_down[i] << " ";
        cout << endl;
        cout << "Right_UP" << endl;
        for(int i=0; i<m; i++)
            cout << y_right[i] << " ";
        cout << endl;
        cout << "Right_DOWN" << endl;
        for(int i=0; i<m; i++)
            cout << y_right_down[i] << " ";
        cout << endl;
        cout << endl;*/
        ll mini=INT_MAX;
        for(int i=0; i<m-1; i++)
        {
            /*int j=i+1;
            for(; j<n; j++)
            {
                if(x[i].first!=x[j].first)
                    break;
            }
            i=j-1;
            if(x[i].first==x[j].first || j==m)
                break;*/
            //cout << i << endl;
            //cout << "Rect 1: " << x[0].first << " till " << x[i].first << " with y axis: " << y_left[i]-y_left_down[i] << endl;
            //cout << "Rest 2: " << x[i+1].first << " till " << x[m-1].first << " with y axis: " << y_right[i+1]-y_right_down[i+1] << endl;
            ll area = (x[i].first-x[0].first)*(y_left[i]-y_left_down[i]);
            //cout << "area1: " << area << " ";
            area+= (x[m-1].first-x[i+1].first)*(y_right[i+1]-y_right_down[i+1]);
            //cout << "area2: " << (x[m-1].first-x[i+1].first)*(y_right[i+1]-y_right_down[i+1]) << endl;
            //cout << endl;
            if(area<mini)
                mini=area;
        }
        return mini;
}

int main()
{

    //fast_input;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        set <pair<ll, ll> > a;
        set <pair<ll, ll> > b;
        for(int i=0; i<n; i++)
        {
            ll xx, yy;
            cin >> xx >> yy;
            a.insert(make_pair(xx,yy));
            b.insert(make_pair(yy,xx));
        }
        /*for(auto itr=x.begin(); itr!=x.end(); itr++)
        {
            cout << (*itr).first << " " << (*itr).second << "      " ;
        }
        cout << endl;*/
        vector <pair<ll, ll> > x;
        vector <pair<ll, ll> > y;
        for(auto itr=a.begin(); itr!=a.end(); itr++)
        {
            x.push_back((*itr));
        }
        for(auto itr=b.begin(); itr!=b.end(); itr++)
        {
            y.push_back((*itr));
        }
        ll m=x.size();
        if(m==1 || m==2)
        {
            cout << 0 << endl;
            continue;
        }
        ll mini1 = fun(n,m,x);
        //cout << "Y-axis" << endl << endl;;
        ll mini2 = fun(n,m,y);
        ll mini3 = fun2(n,m,x);
        ll mini4 = fun2(n,m,y);
        vector <ll> res;
        res.push_back(mini1);
        res.push_back(mini2);
        res.push_back(mini3);
        res.push_back(mini4);
        sort(res.begin(), res.end());
        for(int i=0; i<4; i++)
            cout << res[i] << " ";
        cout << endl;
        cout << res[0] << endl;
    }
	return 0;
}
