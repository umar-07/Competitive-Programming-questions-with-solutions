#include <iostream>

using namespace std;

int main()
{
    int arr[10];
    int m=2;
    for(int i=0; i<11;)
    {
        for(int j=i; j<=(i+m-1); j++)
        {
            arr[j]=m-1;
        }
        i+=m;
        m++;
    }
    cout << arr[3];
    return 0;
}
