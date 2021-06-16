#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum=0;
        cin >> n;
        cin.sync();
        string arr[n];
        for(int i=0; i<n; i++)
        {
            int counti=0, dis=0;
            cin.sync();
            cin >> arr[i];
            if(i!=0)
            {
                for(int j=0; j<i; j++)
                {
                    if(arr[i]==arr[j])
                    {
                        dis=1;
                        break;
                    }
                }
            }
            string z=arr[i];
            int l=z.size();
            char w[l];
            for(int j=0; j<l; j++)
            {
                w[j]=z[j];
            }
            for(int k=0; k<l; k++)
            {
                if(k==0)
                    counti+=2;
                else
                {
                    if((w[k-1]=='d')||(w[k-1]=='f'))
                    {
                        if((w[k]=='d')||(w[k]=='f'))
                            counti+=4;
                        else
                            counti+=2;
                    }
                    else if((w[k-1]=='j')||(w[k-1]=='k'))
                    {
                        if((w[k]=='j')||(w[k]=='k'))
                            counti+=4;
                        else
                            counti+=2;
                    }
                }
            }
            if(dis==0)
                sum=sum+counti;
            else
                sum=sum+(counti/2);
        }
        cout << sum << endl;
    }
    return 0;
}
