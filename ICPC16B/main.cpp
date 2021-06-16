#include <bits/stdc++.h>

using namespace std;

long long int bs(long long int arr[], long long int first, long long int last, long long int num)
{
    long long int middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
                return 1;
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }
        if(first > last)
	{
	    return 0;
	}
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+n);
        int found;
        for(int i=0; i<n; i++)
        {
            found=0;
            for(int j=0; j<n; j++)
            {
                if(i==j)
                    continue;
                else
                {
                    long long int num=arr[i]*arr[j];
                    long long int first=0;
                    long long int last=n-1;
                    long long int o=bs(arr, first, last, num);
                    if(o==1)
                        found=1;
                    else
                        found=0;
                }
                if(found==1)
                    continue;
                else
                    break;
            }
            if(found==0)
                break;
        }
        if(found==0)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
