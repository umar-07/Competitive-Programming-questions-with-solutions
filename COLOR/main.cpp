#include <iostream>

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
        char c[]={'R', 'G', 'B'};
        int min=0, fl=0;;
        for(int i=0; i<3; i++)
        {
            int count=0;
            for(int j=0; j<n; j++)
            {
                    if(arr[j]!=c[i])
                    {
                        count++;
                    }
            }
            if(i==0)
            {
                min = count;
            }
            else
            {
                if(count<min)
                {
                    min=count;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}
