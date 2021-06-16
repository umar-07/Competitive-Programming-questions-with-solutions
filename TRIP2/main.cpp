#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int counti=0;
        int arr[n];
        int maxi=0;
        int con=1;
        int prev=-2;
        int next=-2;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(i==0)
                prev=arr[i];
            if(arr[i]==-1)
                counti++;
            if(arr[i]==-1)
            {
                if(i==0)
                    continue;
                else
                {
                    if(arr[i]==arr[i-1])
                        con++;
                    else
                        {
                            con=1;
                            next=arr[i];
                        }
                    if(con>maxi)
                        maxi=con;
                }
            }
        }
        if(counti==n)
            cout << "YES" << endl;
        else
        {
            if(k==2)
            {

            }
        }
        //cout << maxi << endl;
    }
    return 0;
}
