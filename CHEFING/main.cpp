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
        string arr[n];
        int alp[26]={0};
        for(int i=0; i<n; i++)
        {
            int flag[26]={0};
            cin >> arr[i];
            int l=arr[i].size();
            for(int j=0; j<l; j++)
            {
                int k=arr[i][j];
                /*cout << arr[i][j] << " " ;
                cout << k;*/
                if(flag[k-97]==0)
                {
                    alp[k-97]+=1;
                    flag[k-97]=1;
                }
            }
        }
        /*for(int i=0; i<26; i++)
        {
            cout << alp[i] <<endl;
        }*/
        int counti=0;
        for(int i=0; i<26; i++)
        {
            if(alp[i]>=n)
                counti++;
        }
        cout << counti << endl;
    }
    return 0;
}
