#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int counti=0;
        int arr[100];
        for(int i=0; i<100; i++)
        {
            cin >> arr[i];
            if(arr[i]<=30)
                counti++;
        }
        if(counti>=60)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
