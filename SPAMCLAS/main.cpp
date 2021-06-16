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
        int mini, maxi;
        cin >> mini >> maxi;
        int w[n], b[n];
        int c_e;
        int c_o;
        if((mini%2==0)&&(maxi%2==0))
        {
            c_o=(maxi-mini)/2;
            c_e=c_o+1;
        }
        else if((mini%2==0)&&(maxi%2!=0))
        {
            c_o= (maxi-mini+1)/2;
            c_e=c_o;
        }
        else if((mini%2!=0)&&(maxi%2==0))
        {
            c_o=(maxi-mini+1)/2;
            c_e=c_o;
        }
        else
        {
            c_e=(maxi-mini)/2;
            c_o=c_e+1;
        }
        for(int i=0; i<n; i++)
        {
            cin >> w[i] >> b[i];
        }
        int even=1, odd=1;
        for(int i=0; i<n; i++)
        {
            if(even==1)
            {
                if(b[i]%2==0)
                    even=1;
                else
                    even=0;
            }
            else
            {
                if(w[i]%2==0)
                {
                    if(b[i]%2==0)
                        even=1;
                    else
                        even=0;
                }
                else
                {
                    if(b[i]%2==0)
                        even=0;
                    else
                        even=1;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(odd==1)
            {
                if(w[i]%2==0)
                {
                    if(b[i]%2==0)
                        odd=0;
                    else
                        odd=1;
                }
                else
                {
                    if(b[i]%2==0)
                        odd=1;
                    else
                        odd=0;
                }
            }
            else
            {
                if(b[i]%2==0)
                    odd=0;
                else
                    odd=1;
            }
        }
       // cout << "even and odd status: " << even << " " << odd << endl;
        if((even==0)&&(odd==0))
        {
            cout << c_o << " " << c_e << endl;
        }
        else if((even==1)&&(odd==0))
        {
            cout << c_o+c_e << " " << "0" << endl;
        }
        else if((even==0)&&(odd==1))
        {
            cout << "0" << " " << c_o+c_e << endl;
        }
        else
        {
            cout << c_e << " " << c_o << endl;
        }
    }
    return 0;
}
