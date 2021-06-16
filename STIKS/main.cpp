#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n], sum[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
            int count1=0;
        for(int i=0; i<n; i++)
        {
            int count=0;
            for(int j=i+1; j<n; j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    if(arr[i]==arr[j])
                    {
                        arr[j]=0;
                        count++;
                        break;
                    }
                }
            }
            if(count!=0)
            {
                if(arr[i]!=0)
                {
                sum[count1]=arr[i];
                count1++;
                }
            }
        }
        /*for(int i=0; i<count1; i++)
            cout << sum[i] << " ";*/
        if(count1<2)
        {
            cout << "-1" << endl;
        }
        else
        {
            int max=(sum[0]*sum[1]);
            for(int i=0; i<count1; i++)
            {
                for(int j=i+1; j<count1; j++)
                {
                        if(sum[i]*sum[j]>max)
                        {
                            max=sum[i]*sum[j];
                        }
                }
            }
            cout << max << endl;
        }
    }
    return 0;
}
