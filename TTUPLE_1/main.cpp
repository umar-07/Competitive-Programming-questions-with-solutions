#include <bits/stdc++.h>
#define ll int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int direct(ll p, ll a, ll q, ll b)
{
    if((a-p)==(b-q))
        return 1;
    if((a==0) || (b==0) || (q==0) || (p==0))
        return 0;
    ll i=a/p;
    ll j=b/q;
    if((i*p == a) && (j*q == b) && (i==j))
        return 1;
    return 0;
}

int check_formula(ll p, ll a, ll q, ll b, ll r, ll c)
{
    if(((a-b)==0) || ((p-q)==0) || ((b-c)==0) || ((q-r)==0) || ((c-a)==0) || ((r-p)==0))
        return 0;
    vector <ll> d1;
    vector <ll> d2;
    vector <ll> d3;

    ll k = (a-b)/(p-q);
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

    k= (a*d1[0])-p;
    d3.push_back(k);
    k= (b*d1[1])-q;
    d3.push_back(k);
    k= (c*d1[2])-r;
    d3.push_back(k);

    int flag=0;
    if( (((p*d1[0])+d2[0]) == a) && (((q*d1[0])+d2[0]) == b) && (((r*d1[0])+d2[0]) == c))
    {
        if( (d1[0]==d1[1]) && (d1[1]==d1[2]) && (d2[0]==d2[1]) && (d2[1]==d2[2]) )
            return 1;
    }

    if( (((p+d3[0])*d1[0])==a) && (((q+d3[0])*d1[0])==b) && (((r+d3[0])*d1[0])==c) )
    {
        if( (d1[0]==d1[1]) && (d1[1]==d1[2]) && (d3[0]==d3[1]) && (d3[1]==d3[2]) )
            return 1;
    }
    return 0;
}


int pair_wise(ll p, ll a, ll q, ll b, ll r, ll c)
{
    //Addition
    int flag=0;
    ll rem = (a-p);
    ll new_q = q+rem;
    int k = direct(new_q, b, r, c);
    if(k==1)
    {
        return 1;
    }
    if((a!=0) && (p!=0) && (a%p==0))
    {
        ll div = a/p;
        new_q = q*div;
        k = direct(new_q, b, r, c);
        if(k==1)
            return 1;
    }
    if((a==0))
    {
        new_q = 0;
        k = direct(new_q, b, r, c);
        if(k==1)
            return 1;
    }
    return 0;
}

int triple(ll p, ll a, ll q, ll b, ll r, ll c)
{
    ll rem = (a-p);
    ll new_q= q+rem;
    ll new_r= r+rem;
    int k = direct(new_q, b, new_r, c);
    if(k==1)
        return 1;
    if((a!=0) && (p!=0) && (a%p==0))
    {
        ll div=a/p;
        new_q = q*div;
        new_r = r*div;
        k = direct(new_q, b, new_r, c);
        if(k==1)
            return 1;
    }

    if(a==0)
    {
        new_q=0;
        new_r=0;
        k = direct(new_q, b, new_r, c);
        if(k==1)
            return 1;
    }
    return 0;
}

int zero_pair(ll p, ll a, ll q, ll b, ll r, ll c)
{
    ll new_q=0, new_r=0;
    if(((p-a)==(new_q-b)) && ((new_q-b)==(new_r-c)))
        return 1;
    return 0;
}

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

        // Case-2
        vector <ll> num;
        vector <ll> denom;
        if(p!=a)
        {
            num.push_back(p);
            denom.push_back(a);
        }
        if(q!=b)
        {
            num.push_back(q);
            denom.push_back(b);
        }
        if(r!=c)
        {
            num.push_back(r);
            denom.push_back(c);
        }
        //Case-2a
        if(num.size()==1)
        {
            cout << 1 << endl;
            continue;
        }
        //Case-2b
        //Addition
        int si = num.size();
        vector <ll> diff;
        for(int i=0; i<si; i++)
        {
            diff.push_back(denom[i]-num[i]);
        }
        int poll=0;
        for(int i=0; i<si-1; i++)
        {
            if(diff[i]!=diff[i+1])
            {
                poll=1;
                break;
            }
        }
        if(poll==0)
        {
            cout << 1 << endl;
            continue;
        }
        int post=0;
        //Multiplication
        for(int i=0; i<si; i++)
        {
            if(denom[i]==0 || num[i]==0)
            {
                post=1;
                break;
            }
        }
        if(post==0)
        {
            vector <ll> div;
            for(int i=0; i<si; i++)
            {
                ll k = denom[i]/num[i];
                div.push_back(k);
            }
            for(int i=0; i<si-1; i++)
            {
                if(div[i]!=div[i+1])
                {
                    post=1;
                    break;
                }
            }
            if(post==0)
            {
                for(int i=0; i<si; i++)
                {
                    ll k = (div[i])*(num[i]);
                    if(k!=denom[i])
                    {
                        post=1;
                        break;
                    }
                }
                if(post==0)
                {
                    cout << 1 << endl;
                    continue;
                }
            }
        }
        //Left case
        if(num.size()==2)
        {
            if((denom[0]==denom[1]) && (denom[0]==0))
            {
                cout << 1 << endl;
                continue;
            }
        }


        //Case-3
        //Case-3a
        if(num.size()==2)
        {
            cout << 2 << endl;
            continue;
        }

        //Left Case
        if(num.size()==3)
        {
            if((denom[0]==denom[1]) && (denom[1]==denom[2]) && (denom[0]==0))
            {
                cout << 1 << endl;
                continue;
            }

            if((denom[0]==denom[1]) && (denom[0]==0))
            {
                cout << 2 << endl;
                continue;
            }
            if((denom[1]==denom[2]) && (denom[1]==0))
            {
                cout << 2 << endl;
                continue;
            }
            if((denom[0]==denom[2]) && (denom[0]==0))
            {
                cout << 2 << endl;
                continue;
            }
        }

        //Case-3b


        if(num.size()==3)
        {
            //Direct Method
            //Case-3b-1
            int k=-1;
            k=direct(num[0], denom[0], num[1], denom[1]);
            if(k==1)
            {
                cout << 2 << endl;
                continue;
            }
            k=direct(num[1], denom[1], num[2], denom[2]);
            if(k==1)
            {
                cout << 2 << endl;
                continue;
            }
            k=direct(num[0], denom[0], num[2], denom[2]);
            if(k==1)
            {
                cout << 2 << endl;
                continue;
            }

            //Formula
            //Case-3b-2
            int flag= check_formula(p, a, q, b, r, c);
            if(flag==1)
            {
                cout << 2 << endl;
                continue;
            }
        }
        //Case-4
        int flag=0;
        //cout << "um";
        int ch;
        ch=pair_wise(p, a, q, b, r, c);
        if(ch==1)
        {
            cout << 2 << endl;
            continue;
        }
        ch=pair_wise(p, a, r, c, q, b);
        if(ch==1)
        {
            cout << 2 << endl;
            continue;
        }
        ch=pair_wise(q, b, p, a, r, c);
        if(ch==1)
        {
            cout << 2 << endl;
            continue;
        }
        ch=pair_wise(q, b, r, c, p, a);
        if(ch==1)
        {
            cout << 2 << endl;
            continue;
        }
        ch=pair_wise(r, c, p, a, q, b);
        if(ch==1)
        {
            cout << 2 << endl;
            continue;
        }
        ch=pair_wise(r, c, q, b, p, a);
        if(ch==1)
        {
            cout << 2 << endl;
            continue;
        }

        //Case-5
        //cout << "hey";
        int cc;
        cc=triple(p, a, q, b, r, c);
        if(cc==1)
        {
            cout << 2 << endl;
            continue;
        }
        cc=triple(q, b, p, a, r, c);
        if(cc==1)
        {
            cout << 2 << endl;
            continue;
        }
        cc=triple(r, c, q, b, p, a);
        if(cc==1)
        {
            cout << 2 << endl;
            continue;
        }
        if((denom[0]==denom[1]) && (denom[1]==denom[2]))
        {
            cout << 2 << endl;
            continue;
        }
        int chu=0;
        chu= zero_pair(p, a, q, b, r, c);
        if(chu==1)
        {
            cout << 2 << endl;
            continue;
        }
        chu= zero_pair(q, b, p, a, r, c);
        if(chu==1)
        {
            cout << 2 << endl;
            continue;
        }
        chu= zero_pair(r, c, p, a, q, b);
        if(chu==1)
        {
            cout << 2 << endl;
            continue;
        }
        cout << 3 << endl;
        continue;
    }
	return 0;
}
