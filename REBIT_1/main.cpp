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

void prob(ll& z, ll &o, ll& a, ll& b, ll& d, char op)
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
        z = (d%m + (z*3)%m + 2*a)%m;
        o = o%m;
        d = (d*4)%m;
        a = ((d-o-z)/2)%m;
        b=a;
        return;
    }
    if(op=='|')
    {
        o = (d%m + (o*3)%m + 2*a)%m;
        z = z%m;
        d = (d*4)%m;
        a = ((d-o-z)/2)%m;
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
            for(int i=0; i<l.size(); i++)
            {
                if(l[i]!='#')
                    s.insert(make_pair(i, l[i]));
            }
            set <pair <int, char> > :: iterator itr;
            while(!s.empty())
            {
                if(s.size()==1)
                {

                }
                if((*itr).second==')')
                {
                    //cout << "start" << endl;
                    itr--;
                    if(flag==0)
                    {
                        cout << "op: " << (*itr).second << endl;
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
                        //cout << "1a" << endl;
                        set <pair <int, char> > :: iterator i1 = itr;
                        set <pair <int, char> > :: iterator i2 = itr;
                        i2--;
                        set <pair <int, char> > :: iterator i3 = itr;
                        i3++;
                        itr--;
                        itr--;
                        s.erase(i1);
                        s.erase(i2);
                        s.erase(i3);
                        //cout << "1b" << endl;
                        //if(s.size()<2)
                        //    break;
                        //cout << "1c" << endl;
                        itr++;
                        continue;
                    }
                   // cout << "2" << endl;
                    set <pair <int, char> > :: iterator it;
                    it = itr;
                    it--;
                    char op = (*it).second;
                    cout << "op: " << op << endl;
                    prob(z, o, a, b, d, op);
                    set <pair <int, char> > :: iterator i1 = it;
                    i1++;
                    set <pair <int, char> > :: iterator i2 = it;
                    i2--;
                    s.erase(it);
                    s.erase(i1);
                    s.erase(i2);
                    itr++;
                    //if(s.size()<2)
                    //    break;
                }
            }
            ll mo = 998244353;
            //cout << "z, o, a, b, d: " << z << " " << o << " " << a << " " << b << " "  << d << endl;
            //cout << "3" << endl;
            ll res_z, res_o, res_a, res_b;
            //ll opp = modInverse(d, mo);
            //cout << opp << endl;
            cout << "set left" << endl;
            for(itr=s.begin(); itr!=s.end(); itr++)
                cout << (*itr).second << " ";
            cout << endl;
            res_z = ((z%m)*(modInverse(d, mo)%m))%m;
            res_o = ((o%m)*(modInverse(d, mo)%m))%m;
            res_a = ((a%m)*(modInverse(d, mo)%m))%m;
            res_b = ((b%m)*(modInverse(d, mo)%m))%m;
            cout << res_z << " " << res_o << " " << res_a << " " << res_b << endl;
        }
    }
    return 0;
}
