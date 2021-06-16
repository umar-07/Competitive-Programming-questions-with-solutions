#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, f;
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        cin >> f;
        long long int sub[f];
        for(int i=0; i<f; i++)
            cin >> sub[i];
        int j=0, counti=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==sub[j])
            {
                counti++;
                j++;
            }
        }
        if(counti==f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
