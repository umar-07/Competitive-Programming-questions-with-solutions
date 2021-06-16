#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int arr[3];
        for(int i=0; i<3; i++)
            cin >> arr[i];
        sort(arr, arr+3);
        if(arr[0]==arr[1] && arr[1]==arr[2])
            cout << "0" << endl;
        else if((arr[0]==arr[1])&&(arr[1]!=arr[2]))
        {
         //   cout << "   1" << endl;
            arr[0]++;
            arr[1]++;
            if(abs(arr[2]-arr[1])!=0)
                arr[2]--;
            long long int d = 0;
            d+= abs(arr[1]-arr[0]);
            d+= abs(arr[2]-arr[1]);
            d+= abs(arr[2]-arr[0]);
            cout << d << endl;
        }
        else if((arr[1]==arr[2])&&(arr[0]!=arr[1]))
        {
           // cout << "  2  " << endl;
            arr[1]--;
            arr[2]--;
            if(abs(arr[0]-arr[1])!=0)
                arr[0]++;
            long long int d = 0;
            d+= abs(arr[1]-arr[0]);
            d+= abs(arr[2]-arr[1]);
            d+= abs(arr[2]-arr[0]);
            cout << d << endl;
        }
        else
        {
            //cout <<   "   3" << endl;
            arr[0]++;
            arr[2]--;
            long long int d = 0;
            d+= abs(arr[1]-arr[0]);
            d+= abs(arr[2]-arr[1]);
            d+= abs(arr[2]-arr[0]);
            cout << d << endl;
        }
    }
    return 0;
}
