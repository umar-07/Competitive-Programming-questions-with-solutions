#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, a=0, b=0, flag=0;
        cin >> n;
        string s;
        cin >> s;
        int l = s.size();
        int j=-1;
        for(int i=0; i<l; i++)
        {
            if(i%2==0 && s[i]=='1')
                a++;
            else if(i%2!=0 && s[i]=='1')
                b++;
            if((a-b>(l-i)/2) || (b-a)>(l-1-i)/2)
            {
                //cout << "Breaking at i : " << i << endl;
                j=i;
                flag=1;
                break;
            }
            //cout << "Penalty number: " << i/2 << " score A: " << a << " score B: " << b << endl;
        }
        if(flag==0)
            cout << l << endl;
        else
            cout << j+1 << endl;
    }
    return 0;
}
