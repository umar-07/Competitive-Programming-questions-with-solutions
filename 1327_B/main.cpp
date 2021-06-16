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
        int d[n]={0};
        int p[n]={0};
        vector <int> arr[n];
        for(int i=0; i<n; i++)
        {
            int k;
            cin >> k;
            for(int j=0; j<k; j++)
            {
                int m;
                cin >> m;
                m--;
                arr[i].push_back(m);
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<arr[i].size(); j++)
            {
                if(p[arr[i][j]]==0)
                {
                    p[arr[i][j]]=1;
                    d[i]=1;
                    break;
                }
            }
        }
        int dl=-1;
        int pl=-1;
        /*cout << "DAUGTER'S" << endl;
        for(int i=0; i<n; i++)
            cout << d[i] << " ";
        cout << endl;
        cout << "PRINCE" << endl;
        for(int i=0; i<n; i++)
            cout << p[i] << " ";
        cout << endl;*/
        for(int i=0; i<n; i++)
        {
            if(p[i]==0)
            {
                pl=i;
            }
            if(d[i]==0)
            {
                dl=i;
            }
        }
        if(pl==-1 && dl==-1)
            cout << "OPTIMAL" << endl;
        else
            cout << "IMPROVE" << endl << dl+1 << " " << pl+1 << endl;
    }
    return 0;
}
