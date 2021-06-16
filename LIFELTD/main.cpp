#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int found=0;
        char arr[3][3];
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<3; j++)
                cin >> arr[i][j];
        }
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<2; j++)
            {
                if((arr[i][j]=='l')&&(arr[i+1][j]=='l')&&(arr[i+1][j+1]=='l'))
                {
                    found=1;
                    break;
                }
            }
            if(found==1)
                break;
        }
        if(found==1)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
