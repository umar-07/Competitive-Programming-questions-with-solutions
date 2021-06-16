#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s[9];
        for(int i=0; i<9; i++)
            cin >> s[i];
        int arr[9][9];
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
            {
                arr[i][j]= s[i][j]- '0';
            }
        }
        int a;
        a = arr[0][6];
        if(a==1)
            arr[0][6]=2;
        else
            arr[0][6]=1;

        a = arr[1][1];
        if(a==1)
            arr[1][1]=2;
        else
            arr[1][1]=1;

        a = arr[2][5];
        if(a==1)
            arr[2][5]=2;
        else
            arr[2][5]=1;

        a = arr[3][8];
        if(a==1)
            arr[3][8]=2;
        else
            arr[3][8]=1;

        a = arr[4][2];
        if(a==1)
            arr[4][2]=2;
        else
            arr[4][2]=1;

        a = arr[5][4];
        if(a==1)
            arr[5][4]=2;
        else
            arr[5][4]=1;

        a = arr[6][7];
        if(a==1)
            arr[6][7]=2;
        else
            arr[6][7]=1;

        a = arr[7][0];
        if(a==1)
            arr[7][0]=2;
        else
            arr[7][0]=1;

        a = arr[8][3];
        if(a==1)
            arr[8][3]=2;
        else
            arr[8][3]=1;
        for(int i=0; i<9; i++)
        {
            for(int j=0; j<9; j++)
                cout << arr[i][j];
            cout << endl;
        }
    }
    return 0;
}
