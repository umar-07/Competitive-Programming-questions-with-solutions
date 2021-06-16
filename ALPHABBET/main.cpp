#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int l=s.size();
    int n;
    cin >> n;
    while(n--)
    {
        string w;
        cin >> w;
        int h=w.size();
        int f=0;
        for(int i=0; i<h; i++)
        {
            int count=0;
            for(int j=0; j<l; j++)
            {
                if(w[i]==s[j])
                {
                    count=1;
                    break;
                }
            }
            if(count==1)
                f++;
            else
            {
                cout << "No" << endl;
                break;
            }
        }
        if(f==h)
            cout << "Yes" << endl;
    }
    return 0;
}
