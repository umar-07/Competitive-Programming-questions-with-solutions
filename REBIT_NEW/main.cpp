#include <bits/stdc++.h>
#define ll long long int
#define m 998244353
using namespace std;

//Used source : GeeksForGeeks



ll power(ll x, ll y, ll mo)
{
	if (y == 0)
		return 1;
	ll p = power(x%mo, y / 2, mo) % mo;
	p = (p * p) % mo;

	return (y % 2 == 0) ? p : (x * p) % mo;
}

ll modInverse(ll a, ll mo)
{
	if (__gcd(a, mo) != 1)
		return -1;

	else {

	return	power(a, mo - 2, mo);
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
        ll res[10001][4];
        for(int i=0; i<10001; i++)
        {
            res[i][0]=0;
            res[i][1]=0;
            res[i][2]=0;
            res[i][3]=0;
        }
        if(l.size()==1)
        {
            cout << "748683265" << " " << "748683265" << " " << "748683265" << " " << "748683265" << endl;
        }
        else
        {
            ll z_1 =1, z_2=1, o_1=1, o_2=1, a_1=1, a_2=1, A_1=1, A_2=1, c=0;
            int flag=0;
            int xo[4][4]= { {3, 4, 1, 2}, {4, 3, 2, 1}, {1, 2, 3, 4}, {2, 1, 4, 3}, };
            int an[4][4]= { {1, 3, 3, 1}, {3, 2, 3, 2},{3, 3, 3, 3},{1, 2, 3, 4}, };
            int od[4][4]= { {1, 4, 1, 4}, {4, 2, 2, 4},{1, 2, 3, 4},{4, 4, 4, 4}, };
            //cout << od[1][3] << endl;
            ll n = l.size();
            stack <ll> st;
            for(int i=0; i<n; i++)
            {
                if(l[i]=='(')
                    st.push(-4);
                else if(l[i]=='#')
                    st.push(-25);
                else if(l[i]=='^')
                    st.push(-1);
                else if(l[i]=='&')
                    st.push(-2);
                else if(l[i]=='|')
                    st.push(-3);
                else if(l[i]==')')
                {
                    z_1=1;
                    z_2=1;
                    o_1=1;
                    o_2=1;
                    a_1=1;
                    a_2=1;
                    A_1=1;
                    A_2=1;
                    vector <ll> ans;
                    while(st.top()!= -4)
                    {
                        ll k = st.top();
                        ans.push_back(k);
                        st.pop();
                    }
                    if(ans[0]>=0)
                    {
                        //justchecking
                        /*for(int i=0; i<n; i++)
                            cout << res[i][0];
                        cout << endl;*/
                        a_2= res[ans[0]][0];
                        A_2= res[ans[0]][1];
                        z_2= res[ans[0]][2];
                        o_2= res[ans[0]][3];
                    }
                    if(ans[2]>=0)
                    {
                        /*for(int i=0; i<n; i++)
                            cout << res[i][0];
                        cout << endl;*/
                        a_1= res[ans[2]][0];
                        A_1= res[ans[2]][1];
                        z_1= res[ans[2]][2];
                        o_1= res[ans[2]][3];
                    }
                    /*for(int i=0; i<n; i++)
                        cout << res[i][0];
                    cout << endl;*/
                    if(ans[1]==-1)
                    {
                        res[c][0] += ((a_1%m*z_2%m)%m + (A_1%m*o_2%m)%m + (z_1%m*a_2%m)%m + (o_1%m*A_2%m)%m)%m;
                        /*for(int i=0; i<n; i++)
                            cout << res[i][0];
                        cout << endl;*/
                        res[c][1] += ((a_1%m*o_2%m)%m + (A_1%m*z_2%m)%m + (z_1%m*A_2%m)%m + (o_1%m*a_2%m)%m)%m;
                        res[c][2] += ((a_1%m*a_2%m)%m + (A_1%m*A_2%m)%m + (z_1%m*z_2%m)%m + (o_1%m*o_2%m)%m)%m;
                        /*for(int i=0; i<n; i++)
                            cout << res[i][0];
                        cout << endl;*/
                        res[c][3] += ((a_1%m*A_2%m)%m + (A_1%m*a_2%m)%m + (z_1%m*o_2%m)%m + (o_1%m*z_2%m)%m)%m;
                    }
                    else if(ans[1]==-2)
                    {
                        /*for(int i=0; i<n; i++)
                            cout << res[i][0];
                        cout << endl;*/
                        res[c][0] += ((a_1%m*a_2%m)%m + (a_1%m*o_2%m)%m + (o_1%m*a_2%m)%m)%m;
                        res[c][1] += ((A_1%m*A_2%m)%m + (A_1%m*o_2%m)%m + (o_1%m*A_2%m)%m)%m;
                        /*for(int i=0; i<n; i++)
                            cout << res[i][0];
                        cout << endl;*/
                        res[c][2] += ((a_1%m*A_2%m)%m + (a_1%m*z_2%m)%m + (A_1%m*a_2%m)%m + (A_1%m*z_2%m)%m + (z_1%m*a_2%m)%m + (z_1%m*A_2%m)%m + (z_1%m*z_2%m)%m + (z_1%m*o_2%m)%m +(o_1%m*z_2%m))%m;
                        /*for(int i=0; i<n; i++)
                            cout << res[i][0];
                        cout << endl;*/
                        res[c][3] += (o_1%m*o_2%m)%m;
                    }
                    else
                    {
                        /*for(int i=0; i<n; i++)
                            cout << res[i][0];
                        cout << endl;*/
                        	res[c][0] += ((a_1%m*a_2%m)%m + (a_1%m*z_2%m)%m + (z_1%m*a_2%m)%m)%m;
                            res[c][1] += ((A_1%m*A_2%m)%m + (A_1%m*z_2%m)%m + (z_1%m*A_2%m)%m)%m;
                            res[c][2] += (z_1%m*z_2%m)%m;
                            res[c][3] += ((a_1%m*A_2%m)%m + (a_1%m*o_2%m)%m + (A_1%m*a_2%m)%m + (A_1%m*o_2%m)%m + (z_1%m*o_2%m)%m + (o_1%m*a_2%m)%m + (o_1%m*A_2%m)%m + (o_1%m*z_2%m)%m +(o_1%m*o_2%m)%m)%m;
                    }
                    st.pop();
                    st.push(c);
                    c++;
                }
                if(st.top()>=0 && st.size()==1)
                    break;
                //cout << "1";
            }
            //cout << "2";
            ll idx = st.top();
            ll q=0;
            for(int i=0; i<4; i++)
                q = (q%m + (res[idx][i])%m)%m;
            /*for(int i=0; i<n; i++)
                cout << res[i][0];
            cout << endl;*/
            ll mo=998244353;
            q=modInverse(q, mo);
            ll res_z, res_o, res_a, res_b;
            res_z=((res[idx][2]%m)*(q%m))%m;
            res_o=((res[idx][3]%m)*(q%m))%m;
            res_a=((res[idx][0]%m)*(q%m))%m;
            res_b=((res[idx][1]%m)*(q%m))%m;
            cout << res_z << " " << res_o << " " << res_a << " " << res_b << endl;
        }
    }
    return 0;
}
