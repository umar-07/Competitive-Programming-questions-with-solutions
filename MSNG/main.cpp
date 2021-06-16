#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        map <string, int> m;
        for(int i=0; i<n; i++)
        {
            int k;
            string str;
            cin >> k;
            cin >> str;
            m.insert(pair<string, int> (str, k));
        }
        map <string, int> :: iterator itr;
        int val=0, sum=0, flag=0, res=0;
        int fin=0;
        for(itr=m.begin(); itr!=m.end(); itr++)
        {
            if(itr->second!=-1)
            {
                int b = itr->second;
                int s = itr->first.size();
                //int i=s;
                string st = itr->first;
                int j=0;
                while(s--)
                {
                    int l;
                    l = st[j] - 48;
                    sum=sum*b+l;
                    j++;
                }
            }
            if((flag==0)&&(sum!=0))
            {
                flag=1;
                val=sum;
            }
            if(flag==1)
            {
                if(val!=sum)
                {
                    res=1;
                    break;
                }
            }
        }
        //cout << "res :" << res << endl;
        if(res==1)
            cout << "-1" << endl;
        else
        {
            for(itr=m.begin(); itr!=m.end(); itr++)
            {
                int th=0;
                if(itr->second==-1)
                {
                    for(int i=2; i<=36; i++)
                    {
                        int sum1=0;
                        string stri = itr->first;
                        int si = stri.size();
                        int h=0;
                        while(si--)
                        {
                            int dig;
                            dig = stri[h] - 48;
                            sum1=sum1*i+ dig;
                            h++;
                        }
                        //cout << "sum1 while base being: " << i << " : of itr : "  << itr ->first <<  " : "<< sum1 << endl;
                        if(sum1==val)
                        {
                            th=1;
                            break;
                        }
                    }
                    if(th==0)
                    {
                        fin=1;
                        break;
                    }
                }
            }
            if(fin==1)
                cout << "-1" << endl;
            else
                cout << val << endl;
        }
    }
    return 0;
}
