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
        string s, r;
        cin >> s >> r;
        int szero=0, sone=0, rzero=0, rone=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
                szero++;
            else
                sone++;
            if(r[i]=='0')
                rzero++;
            else
                rone++;
        }
        //cout << szero << " " << sone << " " << rzero << " " << rone << endl;
        if((szero==rzero)&&(sone==rone))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
