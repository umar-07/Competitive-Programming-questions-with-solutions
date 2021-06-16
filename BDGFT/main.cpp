#include <bits/stdc++.h>

using namespace std;

#define N 32

int GetOne(string s, int L, int R)
{

    int len = s.length();

    // Converting the string into bitset
    bitset<N> bit(s);

    // Bitwise operations
    // Left shift
    bit <<= (N - len + L - 1);

    // Right shifts
    bit >>= (N - len + L - 1);
    bit >>= (len - R);

    // Now bit has only those bits
    // which are in range [L, R]

    // return count of one in [L, R]
    return bit.count();
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l=s.size();
        int bf=0;
        for(int i=0; i<l-1; i++)
        {
            int k=1;
            int m=1;
            for(j=i; j<l; )
            {

            }
        }
        cout << bf << endl;
    }
    return 0;
}
