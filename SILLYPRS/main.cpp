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
        long long int a[n], b[n], ax[n], ay[n], bx[n], by[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        int cx1=0, cy1=0, cx2=0, cy2=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                ax[cx1]=a[i];
                cx1++;
            }
            else
            {
                ay[cy1]=a[i];
                cy1++;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(b[i]%2!=0)
            {
                bx[cx2]=b[i];
                cx2++;
            }
            else
            {
                by[cy2]=b[i];
                cy2++;
            }
        }
        sort(ax, ax+cx1);
        sort(ay, ay+cy1);
        sort(bx, bx+cx2);
        sort(by, by+cy2);
        long long int sum=0;
        if(cy1>cy2)
        {
            int j=cy1;
            for(int i=0; i<cy2; i++)
            {
                sum=sum+((by[i]+ay[j-1])/2);
                by[i]=0;
                ay[j-1]=0;
                j--;
            }
            int k=cx2;
            for(int i=j-1; i>=0; i--)
            {
                sum=sum+((ay[i]+bx[k-1])/2);
                ay[i]=0;
                bx[k-1]=0;
                k--;
            }
            for(int i=0; i<cx1; i++)
            {
                sum=sum+((ax[i]+bx[i])/2);
                ax[i]=0;
                bx[i]=0;
            }
        }
        else
        {
            int j=cy2;
            for(int i=0; i<cy1; i++)
            {
                sum=sum+((ay[i]+by[j-1])/2);
                ay[i]=0;
                by[j-1]=0;
                j--;
            }
            int k=cx1;
            for(int i=j-1; i>=0; i--)
            {
                sum=sum+((by[i]+ax[k-1])/2);
                by[i]=0;
                ax[k-1]=0;
                k--;
            }
            for(int i=0; i<cx2; i++)
            {
                sum=sum+((ax[i]+bx[i])/2);
                ax[i]=0;
                bx[i]=0;
            }
        }
        cout << sum << endl;
        //cout << cx1 << " " << cy1 << " " << cx2 << " " << cy2;
    }
    return 0;
}
