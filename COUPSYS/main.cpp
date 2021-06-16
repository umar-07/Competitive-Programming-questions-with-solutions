#include <iostream>

using namespace std;

int main()
{
    int k, t;
    cin >> t;
    for(k=0; k<t; k++)
    {
        int n;
        cin >> n;
        int c[n], l[n], x[n];
        for(int i=0; i<n; i++)
        {
            cin >> c[i];
            cin >> l[i];
            cin >> x[i];
        }
        int m1=0, m2=0, m3=0;
        int d1=0, d2=0, d3=0;
        for(int i=0; i<n; i++)
        {
            if(l[i]==1)
            {
                if(m1==0)
                {
                    m1=x[i];
                    d1=c[i];
                }
                else
                {
                    if(x[i]>m1)
                    {
                        m1=x[i];
                        d1=c[i];
                    }
                    else if(x[i]=m1)
                    {
                        if(c[i]<d1)
                        {
                            d1=c[i];
                        }
                    }
                }
            }
            if(l[i]==2)
            {
                if(m2==0)
                {
                    m2=x[i];
                    d2=c[i];
                }
                else
                {
                    if(x[i]>m2)
                    {
                        m2=x[i];
                        d2=c[i];
                    }
                    else if(x[i]=m2)
                    {
                        if(c[i]<d2)
                        {
                            d2=c[i];
                        }
                    }
                }
            }
            if(l[i]==3)
            {
                if(m3==0)
                {
                    m3=x[i];
                    d3=c[i];
                }
                else
                {
                    if(x[i]>m3)
                    {
                        m3=x[i];
                        d3=c[i];
                    }
                    else if(x[i]=m3)
                    {
                        if(c[i]<d3)
                        {
                            d3=c[i];
                        }
                    }
                }
            }
        }
        cout << m1 << " " << d1 << endl;
        cout << m2 << " " << d2 << endl;
        cout << m3 << " " << d3 << endl;
    }
    return 0;
}
