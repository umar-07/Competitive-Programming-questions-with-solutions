#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, sf=0, of=1, found=1;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        string uma;
        for(int i=0; i<n; i++)
        {
            uma[i]=arr[i]+48;
            //cout << num[i] << endl;
        }
        for(int i=0; i<n; i++)
        {
            if((arr[i]>0)&&(arr[i]<=7))
                continue;
            else
            {
                found=0;
                break;
            }
        }
        int bp=n/2;
        int k=0;
        for( ; k<bp-1 ; k++)
        {
            if(arr[k]<=arr[k+1])
                continue;
            else
            {
                found=0;
                break;
            }
        }
        for(int j=bp; j<n-1; j++)
        {
            if(arr[j]>=arr[j+1])
                continue;
            else
            {
                found=0;
                break;
            }
        }
        if(found==1)
        {
            for(int i=0; i<n; i++)
            {
                if(arr[i]==7)
                    sf=1;
                    break;
            }
            for(int i=0; i<n-1; i++)
            {
                if(arr[i]!=arr[i+1])
                {
                    of=0;
                    break;
                }
            }
        }
        if(found==1)
        {
            if(of==1)
            {
                if(n%2!=0)
                    found=0;
            }
            else if(sf==1)
            {
                for(int i=0; i<n/2; i++)
                {
                    if(uma[i]==uma[n-1-i])
                        continue;
                    else
                    {
                        found=0;
                        break;
                    }
                }
            }
            else
            {
                if(n%2!=0)
                    found=0;
                if(found!=0)
                {
                        for(int i=0; i<n/2; i++)
                    {
                        if(uma[i]==uma[n-1-i])
                            continue;
                        else
                        {
                            found=0;
                            break;
                        }
                    }
                }
            }
            if(found==0)
                cout << "no" << endl;
            else
                cout << "yes" << endl;
        }
    }
    return 0;
}
