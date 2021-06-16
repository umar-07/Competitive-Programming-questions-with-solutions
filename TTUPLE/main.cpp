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
        ll p, q, r, a, b, c;
        cin >> p >> q >> r;
        cin >> a >> b >> c;
        //Case-1
        if((p==a) && (q==b) && (r==c))
        {
            cout << 0 << endl;
            continue;
        }
        //Case-2
        if(((p==a) && (q==b)) || ((r==c) && (q==b)) || ((p==a) && (r==c)))
        {
            cout << 1 << endl;
            continue;
        }
        //Case-3
        if((p==a) || (q==b) || (r==c))
        {
            vector <int> v1;
            vector <int> v2;
            if(p==a)
            {
                v1.push_back(q);
                v1.push_back(r);
                v2.push_back(b);
                v2.push_back(c);
            }
            else if(q==b)
            {
                v1.push_back(p);
                v1.push_back(r);
                v2.push_back(a);
                v2.push_back(c);
            }
            else
            {
                v1.push_back(p);
                v1.push_back(q);
                v2.push_back(a);
                v2.push_back(b);
            }
            if((v2[0]-v1[0])==(v2[1]-v1[1]))
            {
                cout << 1 << endl;
                continue;
            }
            if(v1[0]!=0 && v1[1]!=0 && v2[0]!=0 && v2[1]!=0)
            {
                ll x=v2[0]/v1[0];      //CHECK HERE TOO
                ll y=v2[1]/v1[1];
                if((v1[0]*x == v2[0]) && (v1[1]*y == v2[1]) && (x==y))
                {
                    cout << 1 << endl;
                    continue;
                }
                else
                {
                    //cout << "INT" << endl;
                    ll k = (v2[0]-v2[1])/(v1[0]-v1[1]);
                    ll j = (v2[0])-(v1[0]*k);
                    int flag=0;
                    if((((v1[0]*k)+j)==v2[0]) && (((v1[1]*k)+j)==v2[1]))
                        flag=1;
                    j= (v2[0]*k) - v1[0];
                    if((((v1[0]+j)*k)==v2[0]) && (((v1[1]+j)*k)==v2[1]))
                        flag=1;
                    if(flag==1)
                    {
                        cout << 1 << endl;
                        continue;
                    }
                    else
                    {
                        cout << 2 << endl;
                        continue;
                    }
                }
            }
            else
            {
                    if(v2[0]==0 && v2[1]==0)
                    {
                        cout << 2 << endl;
                        continue;
                    }
                    ll k = (v1[0]-v1[1])/(v2[0]-v2[1]);
                    ll j = (v2[0])-(v1[0]*k);
                    int flag=0;
                    if((((v1[0]*k)+j)==v2[0]) && (((v1[1]*k)+j)==v2[1]))
                        flag=1;
                    j= (v2[0]*k) - v1[0];
                    if((((v1[0]+j)*k)==v2[0]) && (((v1[1]+j)*k)==v2[1]))
                        flag=1;
                    if(flag==1)
                    {
                        cout << 1 << endl;
                        continue;
                    }
                    else
                    {
                        cout << 2 << endl;
                        continue;
                    }

            }
        }
        else
        {
            //cout << "CASE EXTREME" << endl;
            //Case-4

            if((p==q) && (q==r) && (r==p))
            {
                if((a==b) && (b==c) && (c==a))
                {
                    cout << 1 << endl;
                    continue;
                }
                if((a==b) || (b==c) || (c==a))
                {
                    cout << 2 << endl;
                    continue;
                }
                else
                {
                    cout << 3 << endl;
                    continue;
                }
            }

            if((p==q) || (q==r) || (r==p))
            {
                vector <ll> eq_num;
                vector <ll> eq_denom;
                ll x, y;
                if(p==q)
                {
                    eq_num.push_back(p);
                    eq_num.push_back(q);
                    eq_denom.push_back(a);
                    eq_denom.push_back(b);
                    x=r;
                    y=c;
                }
                else if(q==r)
                {
                    eq_num.push_back(q);
                    eq_num.push_back(r);
                    eq_denom.push_back(b);
                    eq_denom.push_back(c);
                    x=p;
                    y=a;
                }
                else if(r==p)
                {
                    eq_num.push_back(p);
                    eq_num.push_back(r);
                    eq_denom.push_back(a);
                    eq_denom.push_back(c);
                    x=q;
                    y=b;
                }
                if(eq_denom[0]==eq_denom[1])
                {
                    ll k = (eq_denom[0]-y)/(eq_num[0]-x);
                    ll j = (eq_denom[0]) - (q*k);
                    int flag=0;
                    if((((eq_num[0]*k)+j)==eq_denom[0]) && (((x*k)+j)==y))
                        flag=1;
                    j = (eq_denom[0]*k)-eq_num[0];
                    if((((eq_num[0]+j)*k)==eq_denom[0]) && (((x+j)*k)==y))
                        flag=1;
                    if(flag==1)
                    {
                        cout << 1 << endl;
                        continue;
                    }
                    else
                    {
                        cout << 2 << endl;
                        continue;
                    }
                }
                else
                {
                    ll k = (eq_denom[0]-y)/(eq_num[0]-x);
                    ll j = (eq_denom[0]) - (q*k);
                    int flag=0;
                    if((((eq_num[0]*k)+j)==eq_denom[0]) && (((x*k)+j)==y))
                        flag=1;
                    j = (eq_denom[0]*k)-eq_num[0];
                    if((((eq_num[0]+j)*k)==eq_denom[0]) && (((x+j)*k)==y))
                        flag=1;


                    k = (eq_denom[1]-y)/(eq_num[1]-x);
                    j = (eq_denom[1]) - (q*k);
                    if((((eq_num[1]*k)+j)==eq_denom[1]) && (((x*k)+j)==y))
                        flag=1;
                    j = (eq_denom[1]*k)-eq_num[1];
                    if((((eq_num[1]+j)*k)==eq_denom[1]) && (((x+j)*k)==y))
                        flag=1;

                    if(flag==1)
                    {
                        cout << 2 << endl;
                        continue;
                    }
                    else
                    {
                        cout << 3 << endl;
                        continue;
                    }
                }
            }

            //Case-EXTREME
            int flag=0;
            vector <ll> d1;
            vector <ll> d2;
            ll k = (a-b)/(p-q);     //Continue from here, see ZERO ERROR
            d1.push_back(k);
            k = (b-c)/(q-r);
            d1.push_back(k);
            k = (c-a)/(r-p);
            d1.push_back(k);
            k = (a)-(p*d1[0]);
            d2.push_back(k);
            k = (b)-(q*d1[1]);
            d2.push_back(k);
            k = (c)-(r*d1[2]);
            d2.push_back(k);

            //Checking--
            if( (((p*d1[0])+d2[0]) == a) && (((q*d1[0])+d2[0]) == b) )
                flag=1;

            if( (((q*d1[1])+d2[1]) == b) && (((r*d1[1])+d2[1]) == c) )
                flag=1;

            if( (((p*d1[2])+d2[2]) == a) && (((r*d1[2])+d2[2]) == c) )
                flag=1;
            if(flag==1)
            {
                vector <pair <ll, ll> > res;
                res.push_back({d1[0], d2[0]});
                res.push_back({d1[1], d2[1]});
                res.push_back({d1[2], d2[2]});
                if((res[0]==res[1]) || (res[1]==res[2]) || (res[2]==res[0]))
                    flag=2;
            }
            if(flag==2)
            {
                cout << 1 << endl;
                continue;
            }

            int poll=0;
            vector <ll> d3;
            k= (a*d1[0])-p;
            d3.push_back(k);
            k= (b*d1[1])-q;
            d3.push_back(k);
            k= (c*d1[2])-r;
            d3.push_back(k);

            //Checking
            if((((p+d3[0])*d1[0])==a) && (((q+d3[0])*d1[0])==b))
                poll=1;

            if((((q+d3[1])*d1[1])==b) && (((r+d3[1])*d1[1])==c))
                poll=1;

            if((((p+d3[2])*d1[2])==a) && (((r+d3[2])*d1[2])==c))
                poll=1;

            if(poll==1)
            {
                vector <pair <ll, ll> > res;
                res.push_back({d1[0], d3[0]});
                res.push_back({d1[1], d3[1]});
                res.push_back({d1[2], d3[2]});
                if((res[0]==res[1]) || (res[1]==res[2]) || (res[2]==res[0]))
                    poll=2;
            }
            if(poll==2)
            {
                cout << 1 << endl;
                continue;
            }

            if(poll==1 || flag==1)
            {
                cout << 2 << endl;
                continue;
            }
            else
            {
                cout << 3 << endl;
                continue;
            }
        }

    }
	return 0;
}
