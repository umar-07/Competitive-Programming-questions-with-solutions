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
            cin >> arr[i];
        map <int, int> m;
        map <int, int> :: iterator itr;
        for(int i=0; i<3; i++)
        {
            for(int j=i+1; j<4; j++)
            {
                int d = (arr[j]-arr[i])/(j-i);
     //           cout << "d: " << d << endl;
                if(m.find(d)!=m.end())
                {
       //             cout << "1" << endl;
                    itr = m.find(d);
                    itr->second++;
                }
                else
                {
         //           cout << "2" << endl;
                    m.insert(pair <int, int> (d,0));
                }
            }
        }
        //cout << "3" << endl;
        int maxi=0;
        int max_count=0;
        map <int, int> :: iterator itr1;
        for(itr1=m.begin(); itr1!=m.end(); itr1++)
        {
          //  cout << "4" << endl;
            if(itr->second>max_count)
            {
                maxi=itr->first;
                max_count=itr->second;
            }
            //cout << "d: " << itr->first << endl;
        }
        int co=0;
        if(arr[1]-arr[0]!=maxi)
            co++;
        if(arr[2]-arr[0]!= 2*maxi)
            co++;
        if(co==2)
            arr[0]=arr[1]-maxi;
        for(int i=0; i<n; i++)
        {
            cout << arr[0]+(i*maxi) << " ";
        }
        cout << endl;
    }
    return 0;
}
