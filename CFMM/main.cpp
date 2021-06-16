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
        int c=0, o=0, d=0, e=0, h=0, f=0;
        for(int i=0; i<n; i++)
        {
            string arr;
            cin >> arr;
            int l=arr.size();
            for(int j=0; j<l; j++)
            {
                if(arr[j]=='c')
                    c++;
                else if(arr[j]=='o')
                    o++;
                else if(arr[j]=='d')
                    d++;
                else if(arr[j]=='e')
                    e++;
                else if(arr[j]=='h')
                    h++;
                else if(arr[j]=='f')
                    f++;
                else
                    continue;
            }
        }
        c=c/2;
        e=e/2;
        int arr1[]={c, o, d, e, h, f};
        int mini=arr1[0];
        for(int i=0; i<6; i++)
        {
            if(arr1[i]<mini)
            {
                mini=arr1[i];
            }
        }
        cout << mini << endl;
    }
    return 0;
}
