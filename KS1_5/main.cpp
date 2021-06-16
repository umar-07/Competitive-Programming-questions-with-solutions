vector<int> a = {3,6,13,8,15};
unordered_map<int, int> hashMap;
int number_of_elements = a.size();
hashMap[0] = -1;
int xor_sum = 0;
for(int i = 0; i < number_of_elements; i++)
    {
        xor_sum ^= a[i];
            if(hashMap.find(xorSum) != hashMap.end())
            {
                cout << hashMap[xorSum] + 1 << " " << i << endl;
                break;
            }
        hashMap[xor_sum] = i;
    }
