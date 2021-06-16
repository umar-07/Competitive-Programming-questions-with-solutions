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
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int j=1, k;
        int flag=1;
        int coun[13]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        for(int i=0; i<n; i++)
        {
            if((i!=0)&&(arr[i]==6)&&(arr[i-1]==7))
            {
                k=i;
                break;
            }
            if((arr[i]==j)||(arr[i]==j+1))
            {
                if(arr[i]==j)
                {
                    coun[j-1]+=1;
                }
                else if(arr[i]==j+1)
                {
                    j=j+1;
                    coun[j]+=1;
                }
            }
            else
            {
                flag=1;
                break;
            }
        }
        for(int i=0; i<7; i++)
            cout << coun[i] << endl;
        int l=j;
        j=6;
        cout << j << " " << l << " " << k << endl;
        for(int i=k; i<n; i++)
        {
            if((arr[i]==j)||(arr[i]==j-1))
            {
                if(arr[i]==j)
                {
                    coun[l]+=1;
                }
                else if(arr[i]==j-1)
                {
                    j=j-1;
                    l=l+1;
                    coun[l]+=1;
                }
            }
            else
            {
                flag=1;
                break;
            }
        }
        if((arr[0]==arr[12])&&(arr[1]==arr[11])&&(arr[2]==arr[10])&&(arr[3]==arr[9])&&(arr[4]==arr[8])&&(arr[5]==arr[7]))
        {
            flag=0;
        }
        if(flag==0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
