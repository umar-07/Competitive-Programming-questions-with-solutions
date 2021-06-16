#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector <char> arr[k];
        for(int i=0; i<n; i++)
        {
            arr[i%k].push_back(s[i]);
        }
        /*for(int i=0; i<k; i++)
        {
            for(int j=0; j<arr[i].size(); j++)
                cout<< arr[i][j] << " ";
            cout << endl;
        }*/
        pair <int, pair <int, char> > c[k];
        for(int i=0; i<k; i++)
        {
            int h[26]={0};
            c[i].second.first=i;
            for(int j=0; j<arr[i].size(); j++)
            {
                h[arr[i][j]-97]++;
            }
            int maxi=h[0];
            int idx=0;
            for(int j=0; j<26; j++)
            {
                if(h[j]>maxi)
                    {
                        maxi=h[j];
                        idx=j;
                    }
            }
            c[i].first = maxi;
            c[i].second.second = idx+97;
        }
        sort(c, c+k);
        int res=0;
        int vis[k]={0};
        for(int i=0; i<k; i++)
        {

        }
    }
    return 0;
}
