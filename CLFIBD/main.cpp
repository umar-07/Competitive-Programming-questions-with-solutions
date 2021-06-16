#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int arr[26]={0};
        for(int i=0; i<n; i++)
        {
            int a = s[i]-97;
            arr[a]++;
        }
        int counti=0;
        for(int i=0; i<26; i++)
        {
            if(arr[i]!=0)
                counti++;
        }
        if(counti<3)
            cout << "Dynamic" << endl;
        else
        {
            vector <int> v;
            for(int i=0; i<26; i++)
            {
                if(arr[i]!=0)
                    v.push_back(arr[i]);
            }
            sort(v.begin(), v.end());
            vector <int> :: iterator itr=v.begin();
            //for(itr=v.begin(); itr!=v.end(); itr++)
            //    cout << *itr << " ";
            //cout << endl;
            //cout << "now" << endl;
            itr=v.begin();
            itr+=2;
            int flag=0;
            if(n>3)
            {
                vector <int> :: iterator it=v.begin();
                vector <int> :: iterator it1=it+1;
                vector <int> :: iterator it2=it+2;
                vector <int> :: iterator it3=it+3;
                if((*it2)+(*it1)!=(*it3))
                {
                    int u;
                    u=(*it);
                    (*it)=(*it1);
                    *it1=u;
                }
            }
            for(; itr!=v.end(); itr++)
            {
                vector <int> :: iterator itr1=itr-1;
                vector <int> :: iterator itr2=itr-2;
                int j, k;
                j=*(itr1);
                k=*(itr2);
                cout << "k:" << k << "  j:" << j << "  itr:" << *itr << endl;
                if((*itr)!=j+k)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                cout << "Not" << endl;
            else
                cout << "Dynamic" << endl;
        }
    }
    return 0;
}
