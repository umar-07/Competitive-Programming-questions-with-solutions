#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

        ll m, s;
        cin >> m >> s;
        if(m==1 && s==0)
            cout << "0 0" << endl;
        else
        {
            if(s>m*9 || s==0)
                cout << "-1 -1" << endl;
            else
            {
                vector <int> a;
                vector <int> b;
                ll loop = m;
                ll sum=s;
                while(loop--)
                {
                    if(s>=9)
                    {
                        a.push_back(9);
                        s-=9;
                    }
                    else if(s>0 && s<9)
                    {
                        a.push_back(s);
                        s=0;
                    }
                    else
                    {
                        a.push_back(0);
                    }
                }
                loop=m;

                    for(int i=0; i<loop; i++)
                    {
                        int left = 1;
                        int th = sum-left;
                        if(i==loop-1)
                        {
                            if(sum==1)
                            {
                                b.push_back(1);
                                sum-=1;
                                continue;
                            }
                            if(sum>1)
                            {
                                b.push_back(sum);
                                sum=0;
                                continue;
                            }
                        }
                        if(th>9)
                        {
                            b.push_back(9);
                            sum-=9;
                        }
                        else
                        {
                            b.push_back(th);
                            sum-=th;
                        }
                    }
                    reverse(b.begin(), b.end());

                for(int i=0; i<b.size(); i++)
                    cout << b[i];
                cout << " ";
                for(int i=0; i<a.size(); i++)
                    cout << a[i];
                cout << endl;
            }
        }

    return 0;
}
