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
        long long int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        //int flag=1;
        int j;
        for(j=n-1; j>=2; )
        {
            //flag=0;
            long long int s1=0, s2=0, s3=0;
            s1=((arr[j]*(j+1))+(arr[j-1]*(j))+(arr[j-2]*(j-1)));
            s2=((arr[j]*(j))+(arr[j-1]*(j+1))+(arr[j-2]*(j-1)));
            s3=((arr[j]*(j+1))+(arr[j-1]*(j-1))+(arr[j-2]*(j)));
            if((s1>=s2)&&(s1>=s3))
            {
                //flag=1;
                j=j-2;
                continue;
            }
            if((s2>=s1)&&(s2>=s3))
            {
            //    flag=1;
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                j=j-2;
                continue;
            }
            if((s3>=s1)&&(s3>=s2))
            {
                int temp=arr[j-1];
                arr[j-1]=arr[j-2];
                arr[j-2]=temp;
                j=j-3;
              //  flag=0;
                continue;
            }
        }
        if(j==1)
        {
            if((arr[0]*2)>arr[1]*1)
            {
                int temp;
                temp=arr[1];
                arr[1]=arr[0];
                arr[0]=temp;
            }
        }
        long long int sum=0;
        for(int i=0; i<n; i++)
        {
            sum=sum+(arr[i]*(i+1));
        }
        for(int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout << endl;
        cout << sum << endl;
    }
    return 0;
}
