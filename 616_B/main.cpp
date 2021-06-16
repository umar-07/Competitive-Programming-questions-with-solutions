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
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int left[n]={0};
        int left_max=n;
        for(int i=0; i<n; i++)
        {
            left[i]=arr[i]-i;
        }
        for(int i=0; i<n; i++)
        {
            if(left[i]<0)
                {
                    left_max=i-1;
                    break;
                }
        }
        int right[n]={0};
        for(int i=n-1; i>=0; i--)
        {
            right[i]=arr[i]-((n-1)-i);
        }
        int right_max=-1;
        for(int i=0; i<n; i++)
        {
            if(right[i]<0)
                {
                    right_max=i+1;
                    break;
                }
        }
        /*cout << "LEFT_MAX" << left_max << endl;
        cout << "Right_Max" << right_max << endl;
        cout << "LEFT" << endl;
        for(int i=0; i<n; i++)
            cout << left[i] << " ";
        cout << endl;
        cout << "RIGHT" << endl;
        for(int i=0; i<n; i++)
            cout << right[i] << " ";
        cout << endl;*/
        if(n%2==0)
        {

        if(right_max<left_max)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        }
        else
        {

        if(right_max<=left_max)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        }
    }
    return 0;
}
