#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp=0;
    for(int i=0; i<n; i++)
    {
        if(i==0)
        {
            temp=1;
            break;
        }
        cout<< i << " ";
    }
    cout << endl << temp;
    return 0;
}
