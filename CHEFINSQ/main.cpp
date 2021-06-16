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
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int b[n];
        for(int i=0; i<n; i++)
            b[i]=arr[i];
        sort(b, b+n);
        int h[101]={0};
        for(int i=0; i<n; i++)
            h[arr[i]]++;
        //for(int i=0; i<n; i++)
          //  cout << h[i] << " " ;
        //cout << endl;
        int g=k;
        int com;
        for(int i=1; i<101; i++)
        {
            if(h[i]==0)
                continue;
            if(h[i]>=g)
            {
                com=i;
                break;
            }
            else
            {
                g=g-h[i];
            }
        }
        int m=h[com];
        int x, y;
        x=max(g, (m-g));
        y=min(g, (m-g));
        //cout << "x: " << x << endl << "y: " << y << endl;
        long long int per[y];
        long long int maaxi=m;
        for(int i=0; i<y; i++)
        {
            per[i]=maaxi;
            maaxi--;
        }
       // for(int i=0; i<y; i++)
       //     cout << per[i] << " ";
       // cout << endl;
        long long int notdiv=1;
        long long int div=y;
        while(div!=0)
        {
            for(int i=0; i<y; i++)
            {
                if(per[i]%div==0)
                {
                    per[i]=per[i]/div;
                    break;
                }
                if(i==y-1)
                {
                    notdiv=notdiv*div;
                }
            }
            div--;
        }
        //cout << notdiv << endl;
        //for(int i=0; i<y; i++)
        //{
          //  cout << per[i] << " " ;
        //}
        //cout << endl;
        long long int multi=1;
        for(int i=0; i<y; i++)
        {
            multi=multi*per[i];
        }
        cout << multi/notdiv << endl;
    }
    return 0;
}
