#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        long long int mo=0, one=0, others=0;
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]==-1)
            {
                mo++;
                if(mo>1)
                    continue;
            }
            if((arr[i]!=0)&&(arr[i]!=1)&&(arr[i]!=-1))
                others++;
            if(arr[i]==1)
                one++;
        }
        if(mo>0)
        {
            if(others>0)
                cout << "no" << endl;
            else if((mo>1)&&(one==0))
                cout << "no" << endl;
            else
                cout << "yes" << endl;
        }
        if(mo==0)
        {
            if(others<2)
                cout << "yes" << endl;
            else
                cout << "no" << endl;
        }
    }
    return 0;
}
