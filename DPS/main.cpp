#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int l=str.size();
        int arr[26]={0};
        for(int i=0; i<l ;i++)
        {
            int k = str[i]-'a';
            arr[k]++;
        }
        int o=0;
        int e=0, sum=0;
        for(int i=0; i<26; i++)
            sum=sum+arr[i];
        for(int i=0; i<26; i++)
        {
            if(arr[i]%2!=0)
                o++;
            else
                e++;
        }
        if((l==1)||(l==2))
            cout << "DPS" << endl;
        else if(sum%2!=0)
        {
            if(o<4)
                cout << "DPS" << endl;
            else
                cout << "!DPS" << endl;
        }
        else
        {
            if(o==0)
                cout << "!DPS" << endl;
            else if(o<3)
                cout << "DPS" << endl;
            else
                cout << "!DPS" << endl;
        }
    }
    return 0;
}
