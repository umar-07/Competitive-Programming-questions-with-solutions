#include <iostream>

using namespace std;

int main()
{
    int k, t;
    cin >> t;
    for(k=0; k<t; k++)
    {
        int i, j, r, c;
        cin >> r >> c;
        int arr[r][c];
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                cin >> arr[i][j];
            }
        }
        int stable=0;
        for(i =0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                int mini=arr[i][j];
                    if((i==0)&&(j==0))
                    {
                        if(arr[i][j+1]<2)
                        {
                            stable=1;
                            break;
                        }
                        if(arr[i+1][j]<2)
                        {
                            stable=1;
                            break;
                        }
                    }
                    else if((i==0)&&(j==c-1))
                    {
                        if(arr[i][j-1]<2)
                        {
                            stable = 1;
                            break;
                        }
                        if(arr[i+1][j]<2)
                        {
                            stable=1;
                            break;
                        }
                    }
                    else if((i==r-1)&&(j==0))
                    {
                        if(arr[i-1][j]<2)
                        {
                            stable=1;
                            break;
                        }
                        if(arr[i][j+1]<2)
                        {
                            stable=1;
                            break;
                        }
                    }
                    else if((i==r-1)&&(j==c-1))
                    {
                        if(arr[i][j-1]<2)
                        {
                            stable=1;
                            break;
                        }
                        if(arr[i-1][j]<2)
                        {
                            stable=1;
                            break;
                        }
                    }
                    else
                    {
                        if(arr[i+1][j]<3)
                        {
                            stable=1;
                            break;
                        }
                        if(arr[i][j+1]<3)
                        {
                            stable=1;
                            break;
                        }
                        if(arr[i-1][j]<3)
                        {
                            stable=1;
                            break;
                        }
                        if(arr[i][j-1]<3)
                        {
                            stable=1;
                            break;
                        }
                    }
            }
        }
        if(stable==1)
            cout << "Unstable" << endl;
        else
            cout << "Stable" << endl;
    }
    return 0;
}
