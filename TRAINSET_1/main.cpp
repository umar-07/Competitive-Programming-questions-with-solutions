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
        map <string, int> :: iterator itr;
        int c=0;
        int zero[n]={0};
        int one[n]={0};
        for(int i=0; i<n; i++)
        {
            int key;
            string str;
            if(i==0)
            {
                cin >> str;
                cin >> key;
                m.insert(pair<string, int>(str, c));
                if(key==0)
                    zero[c]++;
                else
                    one[c]++;
                c++;
                continue;
            }
            cin >> str;
            cin>> key;
            itr=m.find(str);
            if(itr!=m.end())
            {
                if(key==0)
                    zero[itr->second]++;
                else
                    one[itr->second]++;
            }
            else
            {
                m.insert(pair<string, int>(str, c));
                if(key==0)
                    zero[c]++;
                else
                    one[c]++;
                c++;
                continue;
            }
        }
        map <string, int> :: iterator ita;
        //for(ita=m.begin(); ita!=m.end(); ita++)
          //  cout << ita->first << " " << ita->second << " " << zero[ita->second] << " " << one[ita->second] << endl;
        int sum=0;
        for(int i=0; i<c; i++)
        {
            int l = max(zero[i], one[i]);
            sum+=l;
        }
        cout << sum << endl;
    }
    return 0;
}
