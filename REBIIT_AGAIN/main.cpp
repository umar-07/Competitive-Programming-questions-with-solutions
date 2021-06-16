#include <bits/stdc++.h>
#define ll long long int
#define m 998244353
using namespace std;

// used GeeksForGeeks :: https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/

ll gcdExtended(ll a, ll b, ll *x, ll *y);

// Function to find modulo inverse of a
ll modInverse(ll a, ll m_new)
{
    ll x, y;
    ll g = gcdExtended(a, m_new, &x, &y);
    if (g != 1)
        return 0;
    else
    {
        // m is added to handle negative x
        ll res = (x%m_new + m_new) % m_new;
        return res;
    }
}

// C function for extended Euclidean Algorithm
ll gcdExtended(ll a, ll b, ll *x, ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }

    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);

    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;

    return gcd;
}


void prob(ll& z, ll& o, ll& a, ll& d, char op)
{
    if(op=='^')
    {
        z=4;
        o=4;
        a=8;
        d=16;
        return;
    }
    if(op=='&')
    {
        z = (d%m + (z*3)%m + (a)%m)%m;
        o = o%m;
        d = (d*4)%m;
        a = ((d-o-z))%m;
        return;
    }
    if(op=='|')
    {
        o = (d%m + (o*3)%m + (a)%m)%m;
        z = z%m;
        d = (d*4)%m;
        a = ((d-o-z))%m;
        return;
    }
}




int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        string l;
        cin >> l;
        if(l.size()==1)
            cout << "748683265 " << "748683265 " << "748683265 " << "748683265" << endl;
        else
        {
            set <pair <ll, char> > s;
            ll z, o, a, b;
            ll d;
            ll flag=0;
            string str;
            for(int i=0; i<l.size(); i++)
            {
                if(l[i]!='#')
                    str.push_back(l[i]);
            }
            string exp;
            stack <char> st;
            st.push('N');
            for(int i=0; i<str.size(); i++)
            {
                if(str[i]=='&' || str[i]=='|' || str[i]=='^' || str[i]=='(')
                    st.push(str[i]);
                if(str[i]==')')
                {
                    while(st.top()!='N' && st.top()!='(')
                    {
                        char temp = st.top();
                        exp.push_back(temp);
                        //cout << temp << endl;
                        st.pop();
                    }
                    if(st.top()=='(')
                        st.pop();
                }
            }
            while(st.top()!='N')
            {
                char temp = st.top();
                exp.push_back(temp);
                st.pop();
            }
            //cout << "exp :" << endl;
            //cout << exp << endl;
            for(int i=0; i<exp.size(); i++)
            {
                s.insert(make_pair(i, exp[i]));
            }
            set <pair <ll, char> > :: iterator itr;
            for(itr=s.begin(); itr!=s.end(); itr++)
            {
                    if(flag==0)
                    {
                        if((*itr).second=='&')
                        {
                            z=9;
                            o=1;
                            a=6;
                            d=16;
                        }
                        else if((*itr).second=='|')
                        {
                            z=1;
                            o=9;
                            a=6;
                            d=16;
                        }
                        else if((*itr).second=='^')
                        {
                            z=4;
                            o=4;
                            a=8;
                            d=16;
                        }
                        flag=1;
                        continue;
                    }
                    char op = (*itr).second;
                    prob(z, o, a, d, op);
            }
            ll res_z=1, res_o=1, res_a=1, res_b=1;
            ll mo = 998244353;
            ll mod_d = modInverse(d, mo);
            mod_d=mod_d%m;
            res_z = ((z%m)*(mod_d%m))%m;
            res_o = ((o%m)*(mod_d%m))%m;
            a=a/2;
            res_a = ((a%m)*(mod_d%m))%m;
            cout << res_z << " " << res_o << " " << res_a << " " << res_a << endl;
        }
    }
    return 0;
}
