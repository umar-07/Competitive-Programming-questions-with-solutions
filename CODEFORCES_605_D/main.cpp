#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int maxi=1;
    int j=0;
    int found=0;
    int coun=1;
    for(int i=0; i<n-1; i++)
    {
        if(arr[i]>=arr[i+1])
        {
            found++;
            j=i+1;
        }
        if(found==2)
        {
            if(coun>maxi)
                maxi=coun;
            coun=0;
            found=0;
            i=j-1;
            continue;
        }
        if(arr[i]<arr[i+1])
            coun++;
    }
    if(coun>maxi)
        maxi=coun-1;
    cout << maxi+1 << endl;
    return 0;
}
