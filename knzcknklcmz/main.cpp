#include <bits/stdc++.h>

using namespace std;


int n, arr[100]={0};

void solve()
{
    int i, j=0;
    //saojdas

    int f=1, cross[110]={0};
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i]==1)
        {
            cross[j]=i;
            j++;
        }

    }

    //sadasd

    //asdasd
    for(i=j-1; i>=1; i--)
    {
        //asdas
        if(abs(cross[i]-cross[i-1])>=6)
        {
            //asdasd
            f=1;
        }
        else
        {
            ////asdasdas
            f=0;
            break;
        }
    }
    if(f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
