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
        vector <int> v;
        vector <int> :: iterator itr;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            v.push_back(arr[i]);
        }
        sort(arr, arr+n);
        int counti=0;
        if(n==1)
            cout << "1" << endl;
        else if(n==2)
        {
            if(arr[1]-arr[0]==1)
                cout << "0" << endl;
            else if(arr[1]-arr[0]==2)
                cout << "1" << endl;
            else
                cout << "2" << endl;
        }
        else
        {
            int flag=0;
            int counti=0;
            int i=2;
            if(arr[1]-arr[0]==2)
            {
                counti++;
                i=2;
            }
            if(arr[1]-arr[0]>2)
            {
                counti++;
                i=1;
            }
            for(; i<n-1; i++)
            {
                if(arr[i+1]-arr[i]==1)
                {
                    //cout << "Tree Skipped between" << arr[i] << " " << arr[i+1] << endl;
                    i++;
                    continue;
                }
                if(arr[i]-arr[i-1]==1)
                {
                    //cout << "Tree Skipped between" << arr[i-1] << " " << arr[i] << endl;
                    continue;
                }
                if(arr[i+1]-arr[i]==2)
                {
                    counti++;
                    if(i+1==n-1)
                        flag=1;
                    //cout << "Tree Planted between" << arr[i] << " " << arr[i+1] << endl;
                    i++;
                    continue;
                }
                if(arr[i+1]-arr[i]>2)
                {
                    counti++;
                    //cout << "Tree Planted after" << arr[i] << endl;
                }
            }
            if((arr[n-1]-arr[n-2]==2)&&(flag==0))
                counti++;
            if(arr[n-1]-arr[n-2]>2)
                counti++;
            cout << counti << endl;

        }
    }
    return 0;
}
