#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int found=1;
        string s;
        cin >> s;
        int arr[27]={0};
        for(int i=0; i<s.size(); i++)
        {
            int l=s[i]-96;
            //cout << l << " ";
            arr[l]++;
        }
        if(s.size()%2!=0)
            found=0;
        int maxi=0, index=0;
        for(int i=0; i<27; i++)
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
                index=i;
            }
        }
        if(maxi!=(s.size()/2))
            found=0;
        if(found==0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}
