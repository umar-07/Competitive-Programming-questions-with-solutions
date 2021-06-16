#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k;
        cin >> n >> k;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        long long int b[n], c[n];
        for(int i=0; i<n; i++)
        {
            b[i]=arr[i];
            c[i]=arr[i];
        }
        for(int i=0; i<n; i++)
        {
            b[i]=b[i]^b[n-1-i];
        }
        for(int i=0; i<n; i++)
        {
            c[i]=b[i];
        }
        for(int i=0; i<n; i++)
        {
            c[i]=c[i]^c[n-1-i];
        }
        /*cout << "arr1: " << endl;
        for(int i=0; i<n; i++)
            cout << arr[i] << " " ;
        cout << endl;
        cout << "arr2: " << endl;
        for(int i=0; i<n; i++)
            cout << b[i] << " " ;
        cout << endl;
        cout << "arr3: " << endl;
        for(int i=0; i<n; i++)
            cout << c[i] << " " ;
        cout << endl;*/
        if(k<n)
        {
            long long int ans[n];
            for(int i=0; i<n; i++)
            {
                ans[i]=arr[i];
            }
            for(int i=0; i<k; i++)
            {
                ans[i]=ans[i]^ans[n-1-i];
            }
            for(int i=0; i<n; i++)
            {
                cout << ans[i] << " " ;
            }
            cout << endl;
        }
        else
        {
            long long int ans[n];
            if(n%2!=0)
                arr[(n-1)/2]=0;
            for(int i=0; i<n; i++)
            {
                ans[i]=arr[i];
            }
            //cout << arr[1] << endl;
            long long int m=(k-1)/n;
            //cout << m << endl;
            m=m%3;
            //cout << "m: " << m << endl;
            k=k%n;
            //cout << "k: " << k << endl;
            if(k==0)
                k=n;
            if(m==0)
            {
                for(int i=0; i<k; i++)
                {
                    //for(int i=0; i<k; i++)
                    //{
                        ans[i]=ans[i]^ans[n-1-i];
                    //}
                }
                for(int i=0; i<n;  i++)
                    cout << ans[i] << " " ;
                cout << endl;
            }
            else if(m==1)
            {
                for(int i=0; i<k; i++)
                {
                    //for(int i=0; i<k; i++)
                    //{
                        b[i]=b[i]^b[n-1-i];
                    //}
                }
                for(int i=0; i<n;  i++)
                    cout << b[i] << " " ;
                cout << endl;
            }
            else
            {
                for(int i=0; i<k; i++)
                {
                    //for(int i=0; i<k; i++)
                    //{
                        c[i]=c[i]^c[n-1-i];
                    //}
                }
                for(int i=0; i<n;  i++)
                    cout << c[i] << " " ;
                cout << endl;
            }
        }
    }
    return 0;
}
