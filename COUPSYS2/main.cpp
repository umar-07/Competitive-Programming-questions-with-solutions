#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, p1=0, p2=0, p3=0, c1=100, c2=100, c3=100;
        cin >> n;
        int arr[n][3];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i][1]==1)
            {
                if(arr[i][2]>p1)
                {
                    p1=arr[i][2];
                    c1=arr[i][0];
                    continue;
                }
                else if(arr[i][2]==p1)
                {
                    if(arr[i][0]<c1)
                    {
                        c1=arr[i][0];
                    }
                }
            }
            if(arr[i][1]==2)
            {
                if(arr[i][2]>p2)
                {
                    p2=arr[i][2];
                    c2=arr[i][0];
                    continue;
                }
                else if(arr[i][2]==p2)
                {
                    if(arr[i][0]<c2)
                    {
                        c2=arr[i][0];
                    }
                }
            }
            if(arr[i][1]==3)
            {
                if(arr[i][2]>p3)
                {
                    p3=arr[i][2];
                    c3=arr[i][0];
                    continue;
                }
                else if(arr[i][2]==p3)
                {
                    if(arr[i][0]<c3)
                    {
                        c3=arr[i][0];
                    }
                }
            }
        }
        cout << p1 << "  " << c1 << endl;
        cout << p2 << "  " << c2 << endl;
        cout << p3 << "  " << c3 << endl;
    }
    return 0;
}
