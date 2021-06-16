#include <iostream>
#define ll long long int


using namespace std;

int main()
{
    //int t;
    //cin >> t;
    //while(t--)
    //
        ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char arr[k];
    for(int i=0; i<k; i++)
        cin >> arr[i];
    int h[26]={0};
    for(int i=0; i<k; i++)
    {
        int j = arr[i];
        j=j-97;
        h[j]=1;
    }
    ll res=0;
    ll maxi=0;
    for(int i=0; i<n; i++)
    {
        if(h[s[i]-97]==0)
        {
            res = res + (maxi*(maxi+1))/2;
            maxi=0;
            //cout << "res at index ; " << i << " " << res << endl;
            continue;
        }
        maxi++;
        if(i==(n-1))
        {
            res = res + (maxi*(maxi+1))/2;
        }
    }
    cout << res << endl;
    //
    return 0;
}
