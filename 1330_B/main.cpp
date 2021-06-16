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
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int maxi = *max_element(arr, arr+n);
        //cout << "max" << " " << maxi << endl;
        int c=0;
        int x = maxi;
        int y = n-maxi;
        int a_1[x]={0};
        int b_1[y]={0};
        int a_2[y]={0};
        int b_2[x]={0};
        for(int i=0; i<x; i++)
        {
            if(arr[i]>x)
                continue;
            a_1[arr[i]-1]=1;
        }
        for(int i=x; i<n; i++)
        {
            if(arr[i]>y)
                continue;
            b_1[arr[i]-1]=1;
        }
        int flag=0;
        int l1=0;
        for(int i=0; i<x; i++)
        {
            if(a_1[i]==0)
            {
                flag=1;
                break;
            }
        }
        for(int i=0; i<y; i++)
        {
            if(b_1[i]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            {
                l1=1;
                c++;
            }
        for(int i=0; i<y; i++)
        {
            if(arr[i]>y)
                continue;
            a_2[arr[i]-1]=1;
        }
        for(int i=y; i<n; i++)
        {
            if(arr[i]>x)
                continue;
            b_2[arr[i]-1]=1;
        }
        int flag2=0;
        int l2=0;
        for(int i=0; i<y; i++)
        {
            if(a_2[i]==0)
            {
                flag2=1;
                break;
            }
        }
        for(int i=0; i<x; i++)
        {
            if(b_2[i]==0)
            {
                flag2=1;
                break;
            }
        }
        if(flag2==0)
        {
            c++;
            l2=1;
        }
        /*cout << "a_1: " << endl;
        for(int i=0; i<x; i++)
            cout << a_1[i] << " ";
        cout << endl;
        cout << "b_1: " << endl;
        for(int i=0; i<y; i++)
            cout << b_1[i] << " ";
        cout << endl;
        cout << "a_2: " << endl;
        for(int i=0; i<y; i++)
            cout << a_2[i] << " ";
        cout << endl;
        cout << "b_2: " << endl;
        for(int i=0; i<x; i++)
            cout << b_2[i] << " ";
        cout << endl;*/
        if(c==2)
        {
            cout << "2" << endl;
            cout << maxi << " " << (n-maxi) << endl;
            cout << (n-maxi) << " " << maxi << endl;
        }
        else if(c==1)
        {
            cout << "1" << endl;
            if(l1==1)
            {
                cout << maxi << " " << (n-maxi) << endl;
            }
            else
            {
                cout << (n-maxi) << " " << maxi << endl;
            }
        }
        else
            cout << "0" << endl;
    }
    return 0;
}
