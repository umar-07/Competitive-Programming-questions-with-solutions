#include <iostream>

using namespace std;


void decToBinary(long long int n, int binaryNum[])
{

    // counter for binary array
    int i = 0;
    while (n > 0) {

        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int l, r;
        cin >> l >> r;
        int binaryNum[64]={-1};
        decToBinary(r, binaryNum);
        for(int i=0; i<64; i++)
            cout << binaryNum[i] << " ";
    }
    return 0;
}
