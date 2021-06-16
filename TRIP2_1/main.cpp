#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int flag=0;
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int s=0;
        int e=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]!=-1)
                break;
            s++;
        }
        for(int i=n-1; i>=0; i--)
        {
            if(arr[i]!=-1)
                break;
            e++;
        }
        for(int i=s-1; i>=0; i--)
        {
            int counti=0;
            int h;
            while(1)
            {
                if(counti==4)
                    break;
                h = rand()%k + 1;
                if(h!=arr[i+1])
                {
                    arr[i]=h;
                    break;
                }
                else
                    counti++;
            }
            if(counti==4)
            {
                flag=1;
                break;
            }
        }
        e=n-e;
        for(int i=e; i<n; i++)
        {
            int counti=0;
            int h;
            while(1)
            {
                if(counti==4)
                    break;
                h=rand()%k+1;

                    if(h!=arr[i-1])
                    {
                        arr[i]=h;
                        break;
                    }
                    else
                        counti++;
            }
            if(counti==4)
            {
                flag=1;
                break;
            }
        }
        for(int i=1; i<n-1; i++)
        {
            if(arr[i]==-1)
            {
                int counti=0;
                int h;
                while(1)
                {
                    if(counti==4)
                        break;
                    h=rand()%k +1;
                    if((h!=arr[i-1])&&(h!=arr[i+1]))
                    {
                        arr[i]=h;
                        break;
                    }
                    else
                        counti++;
                }
                if(counti==4)
            {
                flag=1;
                break;
            }
            }
        }
        if(flag==4)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for(int i=0; i<n; i++)
                cout << arr[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
