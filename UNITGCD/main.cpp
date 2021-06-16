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
        if(n==1)
        {
            cout << "1" << endl;
            cout << "1" << " " << "1" << endl;
        }
        else if(n==2)
        {
            cout << "1" << endl;
            cout << "2" << " " << "1" << " " << "2" << endl;
        }
        else if(n==3)
        {
            cout << "1" << endl;
            cout << "3" << " " << "1" << " " << "2" << " " << "3" << endl;
        }
        else
        {
            int x = n/2;
            set <int> arr[x];
            arr[0].insert(1);
            arr[0].insert(2);
            arr[0].insert(3);
            for(int i=4; i<=n; i++)
            {
                int k = i/2;
                k=k-1;
                arr[k].insert(i);
            }
            cout << x << endl;
            for(int i=0; i<x; i++)
            {
                cout << arr[i].size() << " ";
                set <int> :: iterator itr;
                for(itr=arr[i].begin(); itr!=arr[i].end(); itr++)
                {
                    cout << *itr << " ";
                }
                cout << endl;
            }
        }
    }
    return 0;
}
