#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int subArraySum(ll arr[], ll n, ll sum)
{
    // create an empty map
    unordered_map<ll, ll> map;

    // Maintains sum of elements so far
    ll curr_sum = 0;

    for (int i = 0; i < n; i++)
    {
        // add current element to curr_sum
        curr_sum = curr_sum + arr[i];

        // if curr_sum is equal to target sum
        // we found a subarray starting from index 0
        // and ending at index i
        if (curr_sum == sum)
        {
            return 1;
        }

        // If curr_sum - sum already exists in map
        // we have found a subarray with target sum
        if (map.find(curr_sum - sum) != map.end())
        {
            return  1;
        }

        map[curr_sum] = i;
    }
    return 0;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cin >> x;
        ll sum=0;
        for(int i=0; i<n; i++)
            sum+=arr[i];
        ll err = sum - x;
        int res=0;
        if(err==0)
            res=1;
        int flag= subArraySum(arr, n, err);
        if(res==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(flag==1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
