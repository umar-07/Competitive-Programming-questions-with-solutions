#include <bits/stdc++.h>
#define ll long long int
#define m 998244353
using namespace std;

// used GeeksForGeeks :: https://www.geeksforgeeks.org/multiplicative-inverse-under-modulo-m/


ll modInverse(ll a, ll mn)
{
    ll m0 = mn;
    ll y = 0, x = 1;

    if (mn == 1)
      return 0;

    while (a > 1)
    {
        // q is quotient
        ll q = a / mn;
        ll t = mn;

        // m is remainder now, process same as
        // Euclid's algo
        mn = a % mn, a = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0)
       x += m0;

    return x;
}

void prob(ll& z, ll& o, ll& a, ll& b, ll& d, char op)
{
    if(op=='^')
    {
        z=4;
        o=4;
        a=4;
        b=4;
        d=16;
        return;
    }
    if(op=='&')
    {
        z = (d + (z*3) + 2*a);
        o = o;
        d = d*4;
        a = ((d-o-z)/2);
        b=a;
        return;
    }
    if(op=='|')
    {
        o = (d + (o*3) + 2*a);
        z = z;
        d = d*4;
        a = ((d-o-z)/2);
        b=a;
        return;
    }
}




int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string l;
        cin >> l;
        if(l.size()==1)
            cout << "748683265 " << "748683265 " << "748683265 " << "748683265" << endl;
        else
        {
            set <pair <int, char> > s;
            ll z, o, a, b;
            ll d;
            int flag=0;
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
            set <pair <int, char> > :: iterator itr;
            for(itr=s.begin(); itr!=s.end(); itr++)
            {
                    if(flag==0)
                    {
                        if((*itr).second=='&')
                        {
                            z=9;
                            o=1;
                            a=3;
                            b=3;
                            d=16;
                        }
                        else if((*itr).second=='|')
                        {
                            z=1;
                            o=9;
                            a=3;
                            b=3;
                            d=16;
                        }
                        else if((*itr).second=='^')
                        {
                            z=4;
                            o=4;
                            a=4;
                            b=4;
                            d=16;
                        }
                        flag=1;

                        continue;
                    }

                    char op = (*itr).second;
                    prob(z, o, a, b, d, op);

            }
            ll mo = 998244353;
            ll res_z, res_o, res_a, res_b;
            d = modInverse(d, mo);
            res_z = ((z%m)*(d%m))%m;
            res_o = ((o%m)*(d%m))%m;
            res_a = ((a%m)*(d%m))%m;
            res_b = ((b%m)*(d%m))%m;
            cout << res_z << " " << res_o << " " << res_a << " " << res_b << endl;
        }
    }
    return 0;
}
