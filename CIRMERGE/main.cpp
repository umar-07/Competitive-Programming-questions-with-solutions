#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long long int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        long long int p=0;
        for(int i=0; i<n-1; i++)
        {
            long long int s = std::numeric_limits<int>::max();
            int q=n+1;
            int w=n+1;
            for(int j=0; j<n; j++)
            {
                int m;
                if(arr[j]==0)
                    continue;
                for(int k=j+1; ; k++)
                {
                    if(k<n)
                        {
                            if(arr[k]==0)
                                continue;
                            else
                            {
                                m=k;
                                break;
                            }
                        }
                    else if(k>=n)
                    {
                        k=-1;
                        continue;
                    }
                }
                if(arr[j]+arr[m]<s)
                {
                    s=arr[j]+arr[m];
                    q=j;
                    w=m;
                }
            }
            p=p+s;
            //cout << p << " " << s << " " << q << " " << w << endl;
            arr[w]=0;
            arr[q]=s;
            //for(int i=0; i<n; i++)
              //  cout << arr[i] << " ";
            //cout << endl;
        }
        cout << p << endl;
    }
    return 0;
}
