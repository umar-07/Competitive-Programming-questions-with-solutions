#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    int flag=0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)
        {
            flag=1;
            break;
        }

    }
    if(flag)
    {
        int mi=-1;
        if(n%2==0)
        {
            mi=(n/2)-1;;
        }
        else
        {
            mi=n/2;
        }
        int k = -1;
        if(arr[mi]==x)
            k=mi;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(i<mi && arr[i]==x)
                {
                    k=i;
                    continue;
                }
                if(i>mi && arr[i]==x)
                {
                    k=i;
                    break;
                }
            }
        }
        int tot=n;
        if(n%2!=0)
        {
            int mid=n/2;
            int right = (n-1-k);
            int left = k;
            if(k==mid)
                cout << "0" << endl;
            else if(k<mid)
            {
                cout << (right-left-1) << endl;
            }
            else
            {
                cout << left-right << endl;
            }
        }
        else
        {
            int mid=(n/2)-1;
            int right = (n-1-k);
            int left = k;
            if(k==mid)
                cout << "0" << endl;
            else if(k<mid)
            {
                cout << (right-left-1) << endl;
            }
            else
            {
                cout << left-right << endl;
            }
        }
    }
    else
    {
        int k=-1;
        for(int i=0; i<n; i++)
        {
            if(i==0 && arr[0]>x)
            {
                k=0;
                break;
            }
            if(i==n-1 && arr[n-1]<x)
            {
                k=n;
                break;
            }
            else if(i<n-1)
            {
                if(arr[i]<x && arr[i+1]>x)
                {
                    k=i+1;
                    break;
                }
            }
        }
        int total=n+1;
        if(n%2!=0)
        {
            int mid=total/2;
            int right = (total-1-k);
            int left = k;
            if(k==mid)
                cout << "0" << endl;
            else if(k<mid)
            {
                cout << (right-left-1) << endl;
            }
            else
            {
                cout << left-right << endl;
            }
        }
        else
        {
            int mid=(total/2)-1;
            int right = (total-1-k);
            int left = k;
            if(k==mid)
                cout << "0" << endl;
            else if(k<mid)
            {
                cout << (right-left-1) << endl;
            }
            else
            {
                cout << left-right << endl;
            }
        }
    }
    return 0;
}
