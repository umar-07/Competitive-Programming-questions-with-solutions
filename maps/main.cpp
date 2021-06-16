#include <bits/stdc++.h>

using namespace std;

int main()
{
    int counti=0;
    vector<int> a = {8, 1, 5, 11, 6, 8, 9};
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
        cout << hashMap[xor_sum] + 1 << " " << i << endl;
    }
    hashMap[xor_sum] = i;
}
cout << counti << endl;
}
