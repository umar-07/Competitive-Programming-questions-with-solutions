#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, i;
        cin >> n;
        long long int arr[n];
        for(i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        long long int c=0, h=0;
        for(int i=1; ; i++)
        {
            sort(arr, arr+n);
            long long int last=arr[n-1];
            long long int index=n-1;
            int counti=0;
            for(int j=0; j<n; j++)
            {
                if(arr[j]!=0)
                    counti=1;
            }
            if(counti==0)
                break;
            if(i%2!=0)
            {
                int flag=0;
                for(int j=0; j<index; j++)
                {
                    if(last==arr[j])
                        flag=1;
                }
                if(flag==0)
                {
                    c=c+arr[index];
                    arr[index]=arr[index]/2;
                    continue;
                }
                else
                {
                    for(int j=0; j<n; j++)
                    {
                        if(last==arr[j])
                        {
                            arr[j]=0;
                        }
                    }
                }
            }
            else
            {
              int flag=0;
                for(int j=0; j<index; j++)
                {
                    if(last==arr[j])
                        flag=1;
                }
                if(flag==0)
                {
                    h=h+arr[index];
                    arr[index]=arr[index]/2;
                    continue;
                }
                else
                {
                    for(int j=0; j<n; j++)
                    {
                        if(last==arr[j])
                        {
                            arr[j]=0;
                        }
                    }
                }
            }
        }
        if(c>h)
        {
            cout << "Cherry " << (c-h) << endl;
        }
        else
            cout << "Hazardous" << endl;
    }
    return 0;
}
