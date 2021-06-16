#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, p;
        cin >> n >> k >> p;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        if(p==0)
        {
            int maxi=INT_MIN;
            int im;
            for(int i=0; i<n; i++)
            {
                if(arr[i]>maxi)
                {
                    im=i;
                    maxi=arr[i];
                }
            }
            if(k%2!=0)
            {
                cout << maxi << endl;
            }
            else
            {
                int mini;
                for(int i=0; i<n; i++)
                {
                    if(i==0)
                    {
                        mini=arr[1];
                    }
                    else if(i==n-1)
                    {
                        if(mini<arr[n-2])
                            mini=arr[n-2];
                    }
                    else
                    {
                        int n1 = arr[i-1];
                        int n2 = arr[i+1];
                        int g = min(n1, n2);
                        if(g>mini)
                            mini = g;
                    }
                }
                cout << mini << endl;
            }
        }
        else
        {
            int mini=INT_MAX;
            int im;
            for(int i=0; i<n; i++)
            {
                if(mini>arr[i])
                {
                    im=i;
                    mini=arr[i];
                }
            }
            if(k%2!=0)
            {
                //cout << "if";
                cout << mini << endl;
            }
            else
            {
                int mini;
                for(int i=0; i<n; i++)
                {
                    if(i==0)
                    {
                        mini=arr[1];
                    }
                    else if(i==n-1)
                    {
                        if(mini>arr[n-2])
                            mini=arr[n-2];
                    }
                    else
                    {
                        int n1 = arr[i-1];
                        int n2 = arr[i+1];
                        int g = max(n1, n2);
                        if(g<mini)
                            mini = g;
                    }
                }
                cout << mini << endl;
            }
        }
    }
    return 0;
}
