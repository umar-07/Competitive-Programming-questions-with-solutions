#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int c=0;
    for(int i=0; i<n; i++)
    {
        int p=1;
        for(int j=i; j<n; j++)
        {
            p*= arr[j];
            if(p%4==0)
                c++;
            cout << p << " ";
        }
        cout << endl;
    }
    cout << c << endl;
    return 0;
}
