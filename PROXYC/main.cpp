#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int d, counti=0, flag=0;
        double present=0, absent=0;
        cin >> d;
        char arr[d];
        for(int i=0; i<d; i++)
            cin >> arr[i];
        for(int i=0; i<d; i++)
        {
            if(arr[i]=='P')
                present++;
            else if(arr[i]=='A')
                absent++;
        }
        double att;
        att=(present*100.00)/d;
        //cout << present << " " << absent << endl;
        for(int i=2; i<d-2; i++)
        {
            if((i==2)&&(att>=75))
            {
                flag=2;
                break;
            }
            if(arr[i]=='A')
            {
                if(((arr[i-1]=='P')||(arr[i-2]=='P'))&&((arr[i+1]=='P')||(arr[i+2]=='P')))
                {
                    present++;
                    absent--;
                    counti++;
                    att=(present*100.00)/d;
                    //cout << present << " " << absent << " " << att << endl;
                    if(att>=75)
                    {
                        flag=1;
                        break;
                    }
                }
            }
        }
        if(flag==1)
            cout << counti << endl;
        else if(flag==0)
            cout << "-1" << endl;
        else if(flag==2)
            cout << "0" << endl;
    }
    return 0;
}
