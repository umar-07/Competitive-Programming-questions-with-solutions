#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
using namespace std;

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr, arr+n);
    ll c=1;
    vector <ll> res;
    res.push_back(arr[n-1]);
    //debug(res[0]);
    for(int i=n-2; i>=0; i--)
    {
        //cout << endl;
        debug(arr[i]);
        cout << endl;
        for(int j=0; j<res.size(); j++)
        {
            ll k = res.size()-j;
            //debug(j); debug(res[j]); debug(res[0]);
            if(res[j]<k || res[j]==0)
            {
                cout << "res[j] & k: " << res[j] << " " << k << endl;
                c++;
                res.clear();
                break;
            }
        }
        res.push_back(arr[i]);
        cout << "RES" << endl;
        for(int k=0; k<res.size(); k++)
            cout << res[k] << " ";
        cout << endl;
    }
    cout << c << endl;
	return 0;
}
