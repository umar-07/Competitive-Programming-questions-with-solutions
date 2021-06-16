#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

void swapp(ll arr[], int i, int j)
{
    int temp=arr[j];
    arr[j]=arr[i];
    arr[i]=temp;
    return;
}

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int i=0, j=n-1;
    while(i<n && j>=0 && i<j)
    {
        while(arr[i]<0)
        {
            i++;
        }
        while(arr[j]>0)
        {
            j--;
        }
        if(i>=n || j<0)
            break;
        if(i>=j)
            break;
        swapp(arr, i, j);
        //debug(i) debug(j)
        //cout << endl;
        i++;
        j--;
    }
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
    }
	return 0;
}
