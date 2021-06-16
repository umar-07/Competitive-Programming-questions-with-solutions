#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x = 1000000/2;
    vector <int> arr[x];
    arr[0].push_back(1);
    arr[0].push_back(2);
    arr[0].push_back(3);
    for(int i=4; i<=1000000; i++)
    {
        int k = i/2;
        k=k-1;
        arr[k].push_back(i);
    }
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int y = n/2;
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
            cout << y << endl;
            for(int i=0; i<y; i++)
            {
                if(i==y-1)
                {
                    if(n%2==0)
                    {
                        cout << "1 " << n << endl;
                    }
                    else
                        cout << "2 " << n-1 << " " << n << endl;
                }
                else
                {
                    cout << arr[i].size() << " ";
                    for(int j=0; j<arr[i].size(); j++)
                    {
                        cout << arr[i][j] << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
