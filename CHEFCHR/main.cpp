#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l=s.size();
        int count1=0;
        for(int i=0; i<l; i++)
        {
            char arr[4];
            if((s[i]=='c')||(s[i]=='e')||(s[i]=='f')||(s[i]=='h'))
            {
                arr[0]=s[i];
                arr[1]=s[i+1];
                arr[2]=s[i+2];
                arr[3]=s[i+3];
                sort(arr, arr+4);
                if((arr[0]=='c')&&(arr[1]=='e')&&(arr[2]=='f')&&(arr[3]=='h'))
                    count1++;
            }
        }
        if(count1==0)
            cout << "normal" << endl;
        else
            cout << "lovely" << " " << count1 << endl;
    }
    return 0;
}
