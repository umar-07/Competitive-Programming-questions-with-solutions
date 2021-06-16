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
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
            int mini;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if((i==0)&&(j==1))
                {
                    if(arr[i]>arr[j])
                        mini=arr[i]-arr[j];
                    else
                        mini=arr[j]-arr[i];
                }
                else
                {
                    if(arr[i]>arr[j])
                    {
                        if(arr[i]-arr[j]<mini)
                        {
                            mini=arr[i]-arr[j];
                        }
                    }
                    else
                    {
                        if(arr[j]-arr[i]<mini)
                        {
                            mini=arr[j]-arr[i];
                        }
                    }
                }
            }
        }
        cout << mini << endl;
    }
    return 0;
}
