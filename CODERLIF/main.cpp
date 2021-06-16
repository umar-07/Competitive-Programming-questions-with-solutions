#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int arr[30];
        int cons=0;
        for(int i=0; i<30; i++)
        {
            if(arr[i]==1)
                cons++;
            else if(arr[i]==0)
                cons=0;
            if(cons==5)
                break;
        }
        if(cons>=5)
            cout << "#coderlifematters" << endl;
        else
            cout << "#allcodersarefun" << endl;
    }
    return 0;
}
