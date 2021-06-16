#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, u, d;
        cin >> n >> u >> d;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int index=1;
        int p=0;
        for(int i=0; i<n-1; i++)
        {
            if(arr[i]==arr[i+1])
            {
                index++;
                continue;
            }
            else if(arr[i+1]>arr[i])
            {
                if(arr[i+1]-arr[i]<=u)
                {
                    index++;
                    continue;
                }
                else
                    break;
            }
            else
            {
                if(arr[i]-arr[i+1]<=d)
                {
                    index++;
                    continue;
                }
                else
                {
                    if(p==0)
                    {
                        index++;
                        p=1;
                        continue;
                    }
                    else
                        break;
                }

            }
        }
        cout << index << endl;
    }
    return 0;
}
