#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        char arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int counti=0;
        for(int i=1; i<n; i++)
        {
            if((arr[i]=='a')||(arr[i]=='e')||(arr[i]=='i')||(arr[i]=='o')||(arr[i]=='u'))
            {
                if((arr[i-1]!='a')&&(arr[i-1]!='e')&&(arr[i-1]!='i')&&(arr[i-1]!='o')&&(arr[i-1]!='u'))
                {
                    counti++;
                    continue;
                }
                else
                    continue;
            }
        }
        cout << counti << endl;
    }
    return 0;
}
