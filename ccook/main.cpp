#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][5];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=0; j<5; j++)
        {
            if(arr[i][j]==1)
            {
                count++;
            }
        }
        if(count==0)
            cout << "Beginner" << endl;
        else if(count==1)
            cout << "Junior Developer" << endl;
        else if(count==2)
            cout << "Middle Developer" << endl;
        else if(count==3)
            cout << "Senior Developer" << endl;
        else if(count==4)
            cout << "Hacker" << endl;
        else if(count==5)
            cout << "Jeff Dean" << endl;
    }
    return 0;
}
