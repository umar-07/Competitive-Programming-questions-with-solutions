#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n);
        vector <int> v;
        long long int maxi =1;
        for(int i=0; i<n; i++)
        {
            maxi=maxi*arr[i];
            if((maxi>100000000)||(i==n-1))
            {
                v.push_back(maxi);
                maxi=1;
                continue;
            }
        }
        //cout << v.size() << endl;
        vector <int> :: iterator j;
        //for(j=v.begin(); j!=v.end(); j++)
        //{
         //       cout << *j << endl;
        //}
        sort(v.begin(), v.end());
       // for(j=v.begin(); j!=v.end(); j++)
       // {
        //        cout << *j << endl;
        //}
        while(q--)
        {
            long long int x;
            cin >> x;
            //cout << "x: " << x << endl;
            int flag=0;
            vector <int> :: iterator i;
            for(i=v.begin(); i!=v.end(); i++)
            {
                x=x/(*i);
                if(x<=0)
                {
                    x=0;
                    break;
                }
            }
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
