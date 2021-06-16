#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int x, y;
        cin >> x >> y;
        int n, m, k;
        cin >> n >> m >> k;
        int arr1[n][2], arr2[m][2], arr3[k][2];
        for(int i=0; i<n; i++)
            cin >> arr1[i][0] >> arr1[i][1];
        for(int i=0; i<m; i++)
            cin >> arr2[i][0] >> arr2[i][1];
        for(int i=0; i<k; i++)
            cin >> arr3[i][0] >> arr3[i][1];
        double mini=INT_MAX;
        int flag=0;
        int a, c, e;
        float f, s, d;
        for(int i=0; i<n; i++)
        {
           // cout << "i1: " << i << endl;
            f = ((x-arr1[i][0])*(x-arr1[i][0]))+((y-arr1[i][1])*(y-arr1[i][1]));
            if(f>=mini)
                continue;
            for(int j=0; j<m; j++)
            {
             //   cout << "j1: " << j << endl;
                s = ((arr1[i][0]-arr2[j][0])*(arr1[i][0]-arr2[j][0]))+((arr1[i][1]-arr2[j][1])*(arr1[i][1]-arr2[j][1]));
                if((f+s)>=mini)
                    continue;
                for(int l=0; l<k; l++)
                {
               //     cout << "l1: " << l << endl;
                    d = ((arr2[j][0]-arr3[l][0])*(arr2[j][0]-arr3[l][0]))+((arr2[j][1]-arr3[l][1])*(arr2[j][1]-arr3[l][1]));
                    if((f+s+d)<mini)
                    {
                        flag=1;
                        mini=f+s+d;
                        a=i;
                        c=j;
                        e=l;
                    }
                }
            }
        }
        for(int i=0; i<m; i++)
        {
            //cout << "i2: " << i << endl;
            f = ((x-arr2[i][0])*(x-arr2[i][0]))+((y-arr2[i][1])*(y-arr2[i][1]));
            if(f>=mini)
                continue;
            for(int j=0; j<n; j++)
            {
              //  cout << "j2: " << j << endl;
                s = ((arr1[j][0]-arr2[i][0])*(arr1[j][0]-arr2[i][0]))+((arr1[j][1]-arr2[i][1])*(arr1[j][1]-arr2[i][1]));
                if((f+s)>=mini)
                    continue;
                for(int l=0; l<k; l++)
                {
                //    cout << "l2: " << l << endl;
                    d = ((arr1[j][0]-arr3[l][0])*(arr1[j][0]-arr3[l][0]))+((arr1[j][1]-arr3[l][1])*(arr1[j][1]-arr3[l][1]));
                    if((f+s+d)<mini)
                    {
                        flag=2;
                        mini=f+s+d;
                        a=i;
                        c=j;
                        e=l;
                    }
                }
            }
        }
        double d1, d2, d3;
        double final_res;
        if(flag==1)
        {
            d1 = sqrt(((x-arr1[a][0])*(x-arr1[a][0]))+((y-arr1[a][1])*(y-arr1[a][1])));
            d2 = sqrt(((arr1[a][0]-arr2[c][0])*(arr1[a][0]-arr2[c][0]))+((arr1[a][1]-arr2[c][1])*(arr1[a][1]-arr2[c][1])));
            d3 = sqrt(((arr2[c][0]-arr3[e][0])*(arr2[c][0]-arr3[e][0]))+((arr2[c][1]-arr3[e][1])*(arr2[c][1]-arr3[e][1])));
            final_res=d1+d2+d3;
        }
        else
        {
            d1 = sqrt(((x-arr2[a][0])*(x-arr2[a][0]))+((y-arr2[a][1])*(y-arr2[a][1])));
            d2 = sqrt(((arr1[c][0]-arr2[a][0])*(arr1[c][0]-arr2[a][0]))+((arr1[c][1]-arr2[a][1])*(arr1[c][1]-arr2[a][1])));
            d3 = sqrt(((arr1[c][0]-arr3[e][0])*(arr1[c][0]-arr3[e][0]))+((arr1[c][1]-arr3[e][1])*(arr1[c][1]-arr3[e][1])));
            final_res=d1+d2+d3;
        }
        //cout << "flag" << flag << endl;
        //cout << a << " " << c << " " << e << endl;
        cout.precision(11);
        cout << final_res << endl;
    }
    return 0;
}
