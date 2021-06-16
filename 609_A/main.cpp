#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

int main()
{
    int n;
    cin >> n;
    int i =4;
    int j =n+4;
    //cout << i << " " << j << endl;
    while(1)
    {
        //cout << "um";
        if(!isPrime(i) && !isPrime(j))
            break;
        else
        {
            i++;
            j++;
            //cout << i << " " << j << endl;
            continue;
        }
    }
    cout << j << " " << i << endl;
    return 0;
}
