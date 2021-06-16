#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

bool add_add_helper(ll d,ll r1,ll r2)
{
    ll x,y;
    x=r1-d;
    y=r2-d;
    set<ll>s;
    s.insert(0);
    s.insert(x);
    s.insert(y);
    if(s.size()==2)
        return 1;
    s.clear();

    x=r1;
    y=r2-d;
    s.insert(0);
    s.insert(x);
    s.insert(y);
    if(s.size()==2)
        return 1;
    s.clear();

    x=r1-d;
    y=r2;
    s.insert(0);
    s.insert(x);
    s.insert(y);
    if(s.size()==2)
        return 1;

    return 0;
}
bool add_add(ll a[],ll b[])
{
    ll d[3],i;
    for(i=0;i<3;i++)
        d[i]=b[i]-a[i];
    set<ll>s;
    for(i=0;i<3;i++)
        s.insert(d[i]);
    if(s.size()==2)
        return 1;
    s.clear();

    bool f=add_add_helper(d[0],d[1],d[2]);
    if(f)
        return 1;
    f=add_add_helper(d[1],d[0],d[2]);
    if(f)
        return 1;
    f=add_add_helper(d[2],d[1],d[0]);
    if(f)
        return 1;
    return 0;
}
bool add_mul_1(ll a0,ll b0,ll a1,ll b1,ll a2,ll b2)
{
    ll x,y0,y1,y;
    if((a1-a0)==0)
        return 0;
    x=(b1-b0)/(a1-a0);
    if(x==0)
        return 0;

    y0=(b0-(x*a0))/x;
    y1=(b1-(x*a1))/x;
    if(y0!=y1)
        return 0;
    y=y0;

    if((a2+y)==b2)
            return 1;
    if(a2*x==b2)
        return 1;

    if((a2+y)*x==b2)
        return 1;

    return 0;
}
bool add_mul_2(ll d,ll a0,ll b0,ll a1,ll b1)
{
    if(a1==0)
        return 0;
    ll x=b1/a1;
    ll rem=b1-(a1*x);
    if(rem!=0)
        return 0;
    if((a0+d)*x==b0)
        return 1;

    return 0;
}
bool add_mul(ll a[],ll b[])
{
    bool f=add_mul_1(a[0],b[0],a[1],b[1],a[2],b[2]);
    if(f)
        return 1;
    f=add_mul_1(a[0],b[0],a[2],b[2],a[1],b[1]);
    if(f)
        return 1;
    f=add_mul_1(a[1],b[1],a[2],b[2],a[0],b[0]);
    if(f)
        return 1;

    ll i;
    ll d[3];
    for(i=0;i<3;i++)
        d[i]=b[i]-a[i];

    f=add_mul_2(d[0],a[1],b[1],a[2],b[2]);
    if(f)
        return 1;
    f=add_mul_2(d[0],a[2],b[2],a[1],b[1]);
    if(f)
        return 1;
    f=add_mul_2(d[1],a[0],b[0],a[2],b[2]);
    if(f)
        return 1;
    f=add_mul_2(d[1],a[2],b[2],a[0],b[0]);
    if(f)
        return 1;
    f=add_mul_2(d[2],a[1],b[1],a[0],b[0]);
    if(f)
        return 1;
    f=add_mul_2(d[2],a[0],b[0],a[1],b[1]);
    if(f)
        return 1;

    return 0;
}
bool mul_add_1(ll a0,ll b0,ll a1,ll b1,ll a2,ll b2)
{
    ll x,y0,y1,y;
    if((a1-a0)==0)
        return 0;
    x=(b1-b0)/(a1-a0);
    y0=b0-(a0*x);
    y1=b1-(a1*x);
    if(y0!=y1)
        return 0;
    y=y0;
    if(y==0)
        return 1;
    if((a2+y)==b2)
        return 1;
    if(a2*x==b2)
        return 1;
    if((a2*x+y)==b2)
        return 1;
    return 0;
}
bool mul_add_2(ll x,ll a0,ll b0,ll a1,ll b1)
{
    ll y=b1-a1;
    if((a0*x+y)==b0)
        return 1;
    return 0;
}
bool mul_add(ll a[],ll b[])
{
    bool f=mul_add_1(a[0],b[0],a[1],b[1],a[2],b[2]);
    if(f)
        return 1;
    f=mul_add_1(a[0],b[0],a[2],b[2],a[1],b[1]);
    if(f)
        return 1;
    f=mul_add_1(a[1],b[1],a[2],b[2],a[0],b[0]);
    if(f)
        return 1;

    ll i=0;
    ll m[3],r[3];
    for(i=0;i<3;i++)
    {
        if(a[i]!=0)
        {
            m[i]=b[i]/a[i];
            r[i]=b[i]-(m[i]*a[i]);
        }
        else
        {
            m[i]=0;
            r[i]=b[i];
        }
    }
    if(r[0]==0)
    {
        f=mul_add_2(m[0],a[1],b[1],a[2],b[2]);
        if(f)
            return 1;
        f=mul_add_2(m[0],a[2],b[2],a[1],b[1]);
        if(f)
            return 1;
    }
    if(r[1]==0)
    {
        f=mul_add_2(m[1],a[2],b[2],a[0],b[0]);
        if(f)
            return 1;
        f=mul_add_2(m[1],a[0],b[0],a[2],b[2]);
        if(f)
            return 1;
    }
    if(r[2]==0)
    {
        f=mul_add_2(m[2],a[1],b[1],a[0],b[0]);
        if(f)
            return 1;
        f=mul_add_2(m[2],a[0],b[0],a[1],b[1]);
        if(f)
            return 1;
    }
    return 0;
}
bool mul_mul_1(ll m,ll a0,ll b0,ll a1,ll b1)
{
    a0*=m;
    a1*=m;
    if(a0==0 || a1==0)
        return 0;
    ll x0,r0,x1,r1;
    x0=b0/a0;
    r0=b0-(a0*x0);
    x1=b1/a1;
    r1=b1-(a1*x1);

    if(x1==x0 && r0==r1 && r0==0)
        return 1;
    return 0;
}
bool mul_mul_2(ll x,ll a0,ll b0,ll a1,ll b1,ll y,ll rem)
{
    if(rem!=0)
        return 0;
    if((a0*x*y)==b0)
        return 1;
    return 0;
}
bool mul_mul(ll a[],ll b[])
{
    ll i=0;
    ll m[3],r[3];
    for(i=0;i<3;i++)
    {
        if(a[i]!=0)
        {
            m[i]=b[i]/a[i];
            r[i]=b[i]-(m[i]*a[i]);
        }
        else
        {
            m[i]=0;
            r[i]=b[i];
        }
    }
    bool f;
    if(r[0]==0)
    {
        f=mul_mul_1(m[0],a[1],b[1],a[2],b[2]);
        if(f)
            return 1 ;
    }
    if(r[1]==0)
    {
        f=mul_mul_1(m[1],a[0],b[0],a[2],b[2]);
        if(f)
            return 1 ;
    }
    if(r[2]==0)
    {
        f=mul_mul_1(m[2],a[1],b[1],a[0],b[0]);
        if(f)
            return 1 ;
    }
    if(r[0]==0)
    {
        f=mul_mul_2(m[0],a[1],b[1],a[2],b[2],m[2],r[2]);
        if(f)
            return 1 ;
        f=mul_mul_2(m[0],a[2],b[2],a[1],b[1],m[1],r[1]);
        if(f)
            return 1 ;
    }
    if(r[1]==0)
    {
        f=mul_mul_2(m[1],a[0],b[0],a[2],b[2],m[2],r[2]);
        if(f)
            return 1 ;
        f=mul_mul_2(m[1],a[2],b[2],a[0],b[0],m[0],r[0]);
        if(f)
            return 1 ;
    }
    if(r[2]==0)
    {
      f=mul_mul_2(m[2],a[1],b[1],a[0],b[0],m[0],r[0]);
        if(f)
            return 1 ;
        f=mul_mul_2(m[2],a[0],b[0],a[1],b[1],m[1],r[1]);
        if(f)
            return 1 ;
    }
    return 0;
}
bool four(ll a[],ll b[])
{
    bool c1,c2,c3,c4;
    c1=add_add(a,b);
    if(c1)
        return 1;

    c2=add_mul(a,b);
    if(c2)
        return 1;

    c3=mul_add(a,b);
    if(c3)
        return 1;

    c4=mul_mul(a,b);
    if(c4)
        return 1;

    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a[3],b[3],i;
        for(i=0;i<3;i++)
            cin>>a[i];
        for(i=0;i<3;i++)
            cin>>b[i];

        ll cnt=0;
        for(i=0;i<3;i++)
            if(a[i]==b[i])
                cnt++;

        // -------- CASE 0 -----------
        if(cnt==3)
        {
            cout<<"0\n";
            continue;
        }
        // -------- CASE 1 ---------
        if(cnt==2)
        {
            cout<<"1"<<endl;
            continue;
        }
        if(cnt==1)
        {
            vector<ll>a1,b1,diff,mult,rem;
            for(i=0;i<3;i++)
            {
                if(a[i]==b[i])
                    continue;
                a1.push_back(a[i]);
                b1.push_back(b[i]);
                diff.push_back(b[i]-a[i]);
                if(a[i]!=0)
                {
                    mult.push_back(b[i]/a[i]);
                    ll r=b[i]/a[i];
                    r=b[i]-a[i]*r;
                    rem.push_back(r);
                }
                else
                {
                    mult.push_back(0);
                    rem.push_back(b[i]);
                }
            }
            if(b1[0]==b1[1] && b1[0]==0)
            {
                cout<<1<<endl;
                continue;
            }
            if(diff[0]==diff[1])
            {
                cout<<1<<endl;
                continue;
            }
            if(rem[0]==rem[1] && rem[0]==0 && mult[0]==mult[1])
            {
                cout<<1<<endl;
                continue;
            }
        }
        if(cnt==0)
        {
            if(b[0]==b[1] && b[1]==b[2] && b[1]==0)
            {
                cout<<1<<endl;
                continue;
            }

            vector<ll>a1,b1,diff,mult,rem;
            for(i=0;i<3;i++)
            {
                a1.push_back(a[i]);
                b1.push_back(b[i]);
                diff.push_back(b[i]-a[i]);
                if(a[i]!=0)
                {
                    mult.push_back(b[i]/a[i]);
                    ll r=b[i]/a[i];
                    r=b[i]-a[i]*r;
                    rem.push_back(r);
                }
                else
                {
                    mult.push_back(0);
                    rem.push_back(b[i]);
                }
            }
            int f=1;
            for(i=1;i<3;i++)
                if(diff[i]!=diff[i-1])
                {
                    f=0;
                    break;
                }

            if(f)
            {
                cout<<1<<endl;
                continue;
            }
            f=1;
            for(i=1;i<3;i++)
                if(mult[i]!=mult[i-1])
                {
                    f=0;
                    break;
                }
            if(f)
            {
                for(i=0;i<3;i++)
                    if(rem[i]!=0)
                    {
                        f=0;
                        break;
                    }
                if(f)
                {
                    cout<<1<<endl;
                    continue;
                }
            }
        }
        //---------- END OF CASE 1 -------------
        //---------- CASE 2 -------------
        if(cnt==1)
        {
            cout<<2<<endl;
            continue;
        }
        int f=1;
        for(i=1;i<3;i++)
            if(b[i]!=b[i-1])
            {
                f=0;
                break;
            }
        if(f)
        {
            cout<<2<<endl;
            continue;
        }
        bool flag=four(a,b);
        if(flag)
        {
            cout<<2<<endl;
            continue;
        }
        cout<<3<<endl;
    }
    return 0;
}
