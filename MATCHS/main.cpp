#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, m, maxi, mini;
        cin >> n >> m;
        int counti=0;
        int j=0;
        while(1)
        {
            //cout << "count: " << counti << endl;
            if(j==0)
            {
                maxi=max(m,n);
                mini=min(m,n);
            }
            else
            {
                int ae=maxi;
                int be=mini;
                maxi=max(ae,be);
                mini=min(ae,be);
            }
            if((mini==1)||(maxi==1))
            {
                j++;
                if((maxi==1)&&(mini==1))
                {
                    counti++;
                    break;
                }
                if(maxi%2==0)
                {
                    break;
                }
                else
                    {
                        counti++;
                        break;
                    }
            }
            else if((mini==2))
            {
                j++;
                counti++;
                break;
            }
            else
            {
                j++;
                maxi=maxi%mini;
                counti++;
                //cout << "maxi :" << maxi << endl << "mini " << mini << endl;
                continue;
            }
        }
        if(counti%2==0)
            cout << "Rich" << endl;
        else
            cout << "Ari" << endl;
    }
    return 0;
}
