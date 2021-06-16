#include <bits/stdc++.h>

using namespace std;

int xorr(int arr[], int n)
{
    int counti=0;
    vector<int> a ;
    for(int i=0; i<n; i++)
    {
        a.push_back(arr[i]);
    }
    unordered_map<int, int> hashMap;
    int number_of_elements = a.size();
    hashMap[0] = -1;
    int xor_sum = 0;
    for(int i = 0; i < number_of_elements; i++) {
        xor_sum ^= a[i];
    if(hashMap.find(xor_sum) != hashMap.end()) {
        int k = hashMap[xor_sum] + 1;
        int l=i;
        counti+=(l-k);
        //cout << hashMap[xor_sum] + 1 << " " << i << endl;
    }
    hashMap[xor_sum] = i;
}
return counti;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        int n, counti=0;
        cin >> n;
        int arr[n];
        int pa[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++)
        {
            pa[i] = arr[i];
        }
        /*for(int i=1; i<n; i++)
            pa[i]^=pa[i-1];
        for(int i=0; i<n; i++)
            cout << pa[i] <<" ";
        cout << endl;
        for(int i=0; i<n; i++)
        {
            if(pa[i]==0)
            {
                counti+=i;
            }
        }
        int h[100]={0};
        for(int i=0; i<n; i++)
        {
            h[pa[i]]++;
        }
        /*for(int i=0; i<100; i++)
            cout << h[i] <<" ";
        cout << endl;*/
        counti=xorr(pa, n);
        cout << counti << endl;
    }
    return 0;
}
