#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string k;
        cin >> k;
        vector <int> v;
        vector <int> :: iterator itr;
        for(int i=0; i<k.size(); i++)
        {
            v.push_back(k[i]-48);
        }
        int n = v.size();
        if(n==1)
        {
            if(v[0]<9)
                cout << v[0]+1 << endl;
            else
                cout << "11" << endl;
        }
        else
        {
            int parity=0;
            int i, j;
            if(n%2==0)
            {
                i=n/2;
                j= (n/2) + 1;
                parity=0;
            }
            else
            {
                i=n/2;
                j=((n+1)/2)+1;
                parity=1;
            }
            int flag=0;
            while((i>=0)&&(j<n))
            {
                if((v[i]==v[j])&&(v[i]==9))
                {
                    i--;
                    j++;
                    continue;
                }
                if(v[i]>v[j])
                {
                    v[j]=v[i];
                    flag=1;
                    break;
                }
                if(v[i]<v[j])
                {
                    v[i]++;
                    v[j]=v[i];
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {

            }
        }
    }
    return 0;
}
