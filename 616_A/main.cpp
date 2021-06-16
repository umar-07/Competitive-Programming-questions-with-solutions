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
        string s;
        cin >> s;
        int arr[n];
        for(int i=0; i<n; i++)
            arr[i]=s[i]-48;
        if(n==1)
            cout << "-1" << endl;
        else
        {
            int flag=0;
            for(int i=n-1; i>=0; i--)
            {
                if(arr[i]%2==0 || arr[i]==0)
                {
                    arr[i]=-1;
                }
                else
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                cout << "-1" <<endl;
            }
            else
            {
                long long int sum=0;
                for(int i=0; i<n; i++)
                {
                    if(arr[i]!=-1)
                        sum+=arr[i];
                }
                //cout << "sum prev " << sum <<  endl;
                if(sum%2!=0)
                {
                    for(int i=n-1; i>=0; i--)
                    {
                        if(arr[i]%2!=0 && arr[i]!=-1)
                        {
                            sum-=arr[i];
                            arr[i]=-1;
                            break;
                        }
                    }
                }
                //cout << "sum after " << sum << endl;
                if(sum%2==0 && sum!=0)
                {
                    for(int i=0; i<n; i++)
                    {
                        if(arr[i]!=-1)
                            cout << arr[i];
                    }
                    cout << endl;
                }
                else
                    cout << "-1" << endl;
            }
        }
    }
    return 0;
}
