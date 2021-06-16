#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, k;
        cin >> n;
        long long int z=0;
        long long int div = 5;
        k=n;
        while(k/div>0)
        {
            z+= (k/div);
            div*=5;
        }
        cout << z << endl;
    }
    return 0;
}
