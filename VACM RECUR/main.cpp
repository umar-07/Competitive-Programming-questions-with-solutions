#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int mini=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<mini)
            mini=arr[i];
    }
    int min_count=INT_MAX;
    vector <int> v ;
    vector <int> :: iterator itr ;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==mini)
        {
            v.push_back(i);
        }
    }
    int minn=INT_MAX;
    sort(v.begin(), v.end());
    for(itr=v.begin(); itr!=v.end(); itr++)
    {
        if(itr==v.end()-1)
            break;
        if(((*(itr+1))-(*itr))<minn)
            minn =(*(itr+1))-(*itr);
    }
    cout << minn << endl;
    return 0;
}
