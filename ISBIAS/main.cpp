#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int a[n];
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int f1=0;
    long long int b[n]={0};
    long long int c[n]={0};
    long long int d[n]={0};
    for(long long int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        {
            if(f1==0)
            {
                b[i]=b[i-1]+1;
                f1=1;
            }
            else
            {
                b[i]=b[i-1];
            }
        }
        else
        {
        b[i]=b[i-1];
        f1=0;
        }
    }
    int f2=0;
    for(long long int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            if(f2==0)
            {
                c[i]=c[i-1]+1;
                f2=1;
            }
            else
            {
                c[i]=c[i-1];
            }
        }
        else
        {
        c[i]=c[i-1];
        f2=0;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i-1])
        d[i]=1;
        else
        d[i]=-1;
    }
    while(q--)
    {
        long long int l,r,sum=0;
        cin>>l>>r;
        long long int p=0,q=0;
        if(r-l==1)
        {
            if(d[r-1]==1)
            p=1;
        }
        else if(d[l]==1&&d[r-1]==1)
        {
            if(b[r-1]-b[l]==0)
            p=1;
            else
            p=b[r-1]-b[l]+1;
        }
        else if((d[l]==1&&d[r-1]==-1))
        {
            if(b[r-1]-b[l]==0)
            p=1;
            else
            p=b[r-1]-b[l]+1;
        }
        else if((d[l]==-1&&d[r-1]==1))
        {

            /*if(b[r-1]-b[l]==0)
            p=1;
            else*/
            p=b[r-1]-b[l];
        }
        else
        {
            p=b[r-1]-b[l];
        }

        //decreasing
        if(r-l==1)
        {
            if(d[r-1]==-1)
            q=1;
        }
        else if(d[l]==-1&&d[r-1]==-1)
        {
            if(c[r-1]-c[l]==0)
            q=1;
            else
            q=c[r-1]-c[l]+1;
        }
        else if((d[l]==-1&&d[r-1]==1))
        {
            if(c[r-1]-c[l]==0)
            q=1;
            else
            q=c[r-1]-c[l]+1;
        }
        else if((d[l]==1&&d[r-1]==-1))
        {
            q=c[r-1]-c[l];
        }
        else
        {
            q=c[r-1]-c[l];
        }
        if(p==q)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
return 0;
}
