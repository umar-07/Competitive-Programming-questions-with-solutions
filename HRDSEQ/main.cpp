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
        int arr[n];
        arr[0]={0};
        for(int i=1; i<n; i++)
        {
            if(i==1)
            {
                arr[1]={0};
                continue;
            }
            int x = arr[i-1];
            int found=0;
            int key;
            for(int j=i-2; j>=0; j--)
            {
                if(arr[j]==x)
                {
                    found=1;
                    key=j;
                    break;
                }
            }
            if(found==1)
            {
                arr[i]=(i-1)-key;
            }
            else
            {
                arr[i]=0;
            }
        }
        int counti=0;
        int l = arr[n-1];
        for(int i=0; i<n; i++)
        {
            if(arr[i]==l)
                counti++;
        }
        /*for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;*/
        cout << counti << endl;
    }
    return 0;
}
