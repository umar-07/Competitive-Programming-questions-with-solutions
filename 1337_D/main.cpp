#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, m ,l;
        cin >> n >> m >> l;
        ll a[n], b[m], c[l];
        for(int i=0; i<n; i++)
            cin >> a[i];
        for(int i=0; i<m; i++)
            cin >> b[i];
        for(int i=0; i<l; i++)
            cin >> c[i];
        sort(a, a+n);
        sort(b, b+m);
        sort(c, c+l);
        int x=0, y=0, z=0;
        ll res=abs(a[0]-b[0])*abs(a[0]-b[0])+abs(a[0]-c[0])*abs(a[0]-c[0])+abs(c[0]-b[0])*abs(c[0]-b[0]);
        ll f1=a[0], f2=b[0], f3=c[0];
        while(x!=n-1 || y!=m-1 || z!=l-1)
        {
            ll i, j, k;
            //cout << "x, y, z: " << x << " " << y << " " << z << endl;

            i=a[x];
            j=b[y];
            k=c[z];

            //cout << "i, j, k: " << i << " " << j << " " << k << endl;
            if(abs(i-j)*abs(i-j)+abs(j-k)*abs(j-k)+abs(k-i)*abs(k-i)==0)
            {
                res=0;
                f1=i, f2=j, f3=k;
                break;
            }
            ll obj = abs(i-j)*abs(i-j)+abs(j-k)*abs(j-k)+abs(k-i)*abs(k-i);
            if( obj >= res)
            {
                if(i<=j && i<=k)
                {
                    //cout << "i" << endl;
                    if(x!=n-1)
                        x++;
                    else
                    {
                        if(j<=k)
                        {
                            if(y!=m-1)
                                y++;
                            else
                                z++;
                        }
                        else
                        {
                            if(z!=l-1)
                                z++;
                            else
                                y++;
                        }
                    }
                }
                else if(j<i && j<=k)
                {
                    //cout << "j" << endl;
                    if(y!=m-1)
                        y++;
                    else
                    {
                        if(i<=k)
                        {
                            if(x!=n-1)
                                x++;
                            else
                                z++;
                        }
                        else
                        {
                            if(z!=l-1)
                                z++;
                            else
                                x++;
                        }
                    }
                }
                else
                {
                    //cout << "j" << endl;
                    if(z!=l-1)
                        z++;
                    else
                    {
                        if(i<=j)
                        {
                            if(x!=n-1)
                                x++;
                            else
                                y++;
                        }
                        else
                        {
                            if(y!=m-1)
                                y++;
                            else
                                x++;
                        }
                    }
                }
            }
            else
            {
                f1=i, f2=j, f3=k;
                res=obj;
            }
        }
        ll l_a = a[n-1], l_b = b[m-1] , l_c = c[l-1];
        ll q = (l_a-l_b)*(l_a-l_b) + (l_a-l_c)*(l_a-l_c) + (l_b-l_c)*(l_b-l_c);
        //cout << "f1, f2, f3 : " << f1 << " " << f2 << " " << f3 << endl;
        ll ans = (f1-f2)*(f1-f2) + (f2-f3)*(f2-f3) + (f3-f1)*(f3-f1);
        ll fin = min(ans, q);
        cout << fin << endl;
    }
    return 0;
}
