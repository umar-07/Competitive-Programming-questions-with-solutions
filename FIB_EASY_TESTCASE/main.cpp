#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        int f=-1;
        long long int k=n;
        while(k>0)
        {
            k/=2;
            f++;
        }
        //cout << f << endl;
        if(f==0)
            cout << "0" << endl;
        else if(f==1)
            cout << "1" << endl;
        else
        {
            long long int x = f-1;
            x=x%4;
            if(x==1)
                cout << "2" << endl;
            else if(x==2)
                cout << "3" << endl;
            else if(x==3)
                cout << "0" << endl;
            else if(x==0)
                cout << "9" << endl;
        }
        /*long long int k = (long long int)(pow(2,y)+0.5);
        //cout << k << endl;
        long long int b=k%60;
        long long int f[60]={0};
        f[0]=0;
        f[1]=1;
        for(int i=2; i<60; i++)
            f[i]=f[i-1]+f[i-2];
        for(int i=0; i<60; i++)
            f[i]=f[i]%10;
        cout << f[b-1] << endl;*/
    }
    return 0;
}
