#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, x, y;
        cin >> a >> b;
        x=a, y=b;
        int c1=0, c2=0;
        while(x!=0)
        {
            x=x/10;
            c1++;
        }
        //cout << c1;
        while(y!=0)
        {
            y=y/10;
            c2++;
        }
        //cout << c2;
        int sum=0;
        if(c1>c2)
        {
            int rem1=0, rem2=0, arr[c1];
            for(int i=0; i<c2; i++)
            {
                rem1=a%10;
                rem2=b%10;
                sum=(sum)+(((rem1+rem2)%10)*pow(10,i));
                a=a/10;
                b=b/10;
                //cout << sum << endl;
            }
            //cout << a << endl;
            for(int i=0; i<c2; i++)
            {
                arr[i]=sum%10;
                sum=sum/10;
            }
            for(int i=c2; i<c1; i++)
            {
                arr[i]=a%10;
                a=a/10;
            }
            long long int total=0;
            for(int i=c1-1; i>=0; i--)
            {
                total=(total*10)+arr[i];
            }
            cout << total << endl;
        }
        else if(c2>c1)
        {
            int rem1=0, rem2=0, arr[c2];
            for(int i=0; i<c1; i++)
            {
                rem1=a%10;
                rem2=b%10;
                sum=(sum)+(((rem1+rem2)%10)*pow(10,i));
                a=a/10;
                b=b/10;
                //cout << sum << endl;
            }
            //cout << a << endl;
            for(int i=0; i<c1; i++)
            {
                arr[i]=sum%10;
                sum=sum/10;
            }
            for(int i=c1; i<c2; i++)
            {
                arr[i]=b%10;
                b=b/10;
            }
            long long int total=0;
            for(int i=c2-1; i>=0; i--)
            {
                total=(total*10)+arr[i];
            }
            cout << total << endl;
        }
        else
        {
           long long int total=0, rem1=0, rem2=0, arr[c1];
            for(int i=0; i<c1; i++)
            {
                rem1=a%10;
                rem2=b%10;
                arr[i]=(rem1+rem2)%10;
                a=a/10;
                b=b/10;
                //cout << sum << endl;
            }
            for(int i=c1-1; i>=0; i--)
            {
                total=(total*10)+arr[i];
            }
            cout << total << endl;
        }
        }

    return 0;
}
