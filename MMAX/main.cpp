#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long int k;
        cin >> n >>k;
        int arr[n], b[n]={0};
        int count1=0, count2=0;
        if(k>=n)
        {
            long long int div=k/n;
            long long int rem=k%n;
            long long int first=n-rem;
            for(int i=0; i<first; i++)
            {
                arr[i]=div;
            }
            for(int i=first; i<n; i++)
            {
                arr[i]=div+1;
            }
            for(int i=0; i<n; i++)
            {
                if(arr[i]==div)
                    count1++;
                else
                    count2++;
            }
            if(count1>=count2)
            {
                int i=1;
                for(int j=0; j<count2;j++)
                {
                    b[i]=div+1;
                    i=i+2;
                    /*cout << j << " " << i << endl;*/
                }
                for(int k=0; k<n; k++)
                {
                    if(b[k]==0)
                        b[k]=div;
                }
            }
            else
            {
                int i=1;
                for(int j=0; j<count1;j++)
                {
                    b[i]=div;
                    i=i+2;
                    /*cout << j << " " << i << endl;*/
                }
                for(int k=0; k<n; k++)
                {
                    if(b[k]==0)
                        b[k]=div+1;
                }
            }
            int sum=0;
            for(int i=0; i<n-1; i++)
            {
                if(b[i]>b[i+1])
                    sum=sum+(b[i]-b[i+1]);
                else
                    sum=sum+(b[i+1]-b[i]);
            }
            cout << sum << endl;
        }
        else
        {
            long long rem=n-k;
            int i=1;
                for(int j=0; j<rem;j++)
                {
                    b[i]=2;
                    i=i+2;
                    /*cout << j << " " << i << endl;*/
                }
                for(int i=0; i<n; i++)
                {
                    if(b[i]!=2)
                        b[i]=1;
                    else if(b[i]==2)
                        b[i]=0;
                }
                int sum=0;
            for(int i=0; i<n-1; i++)
            {
                if(b[i]>b[i+1])
                    sum=sum+(b[i]-b[i+1]);
                else
                    sum=sum+(b[i+1]-b[i]);
            }
            cout << sum << endl;
        }
        /*for(int i=0; i<n; i++)
            cout << arr[i] << " ";*/
        /*cout << count1 << " " << count2 << endl;*/
        /*for(int i=0; i<n; i++)
            cout << b[i] << " ";*/
    }
    return 0;
}
