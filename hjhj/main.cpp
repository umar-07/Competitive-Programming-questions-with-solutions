#include <iostream>

using namespace std;

int main()
{
    int* b  = new int[5];
    b[1] =1;
    b = new int [3];
    cout << b[1];
    return 0;
}
