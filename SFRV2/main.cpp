#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n], b[n], c[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++)
        {
            b[i]=arr[i];
            c[i]=arr[i];
        }
        long long int sum1=0, sum2=0;
        if(n%2==0)
        {
            //cout << "even" << endl;
            for(int i=0; i<n-1; )
            {
                if(b[i]>b[i+1])
                {
                    int temp=b[i];
                    b[i]=b[i+1];
                    b[i+1]=temp;
                }
                i=i+2;
            }
            for(int i=0; i<n; i++)
                sum1=sum1+(b[i]*(i+1));
            for(int i=1; i<n-2; )
            {
                if(c[i]>c[i+1])
                {
                    int temp=c[i];
                    c[i]=c[i+1];
                    c[i+1]=temp;
                }
                i=i+2;
            }
            for(int i=0; i<n; i++)
                sum2=sum2+(c[i]*(i+1));
            //cout << sum1 << " " << sum2 << endl;
        }
        else
        {
           // cout << "odd" << endl;
            for(int i=0; i<n-2; )
            {
                if(b[i]>b[i+1])
                {
                    int temp=b[i];
                    b[i]=b[i+1];
                    b[i+1]=temp;
                }
                i=i+2;
            }
            for(int i=0; i<n; i++)
                sum1=sum1+(b[i]*(i+1));
            for(int i=1; i<n-1; )
            {
                if(c[i]>c[i+1])
                {
                    int temp=c[i];
                    c[i]=c[i+1];
                    c[i+1]=temp;
                }
                i=i+2;
            }
            for(int i=0; i<n; i++)
                sum2=sum2+(c[i]*(i+1));
            //cout << sum1 << " " << sum2 << endl;
        }
        /*for(int i=0; i<n; i++)
            cout << b[i] << " ";
        cout << endl;
        for(int i=0; i<n; i++)
            cout << c[i] << " ";
        cout << endl;*/
        long long int k=max(sum1, sum2);
        cout << k << endl;
    }
    return 0;
}
