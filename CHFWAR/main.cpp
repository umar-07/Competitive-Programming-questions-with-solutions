#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, p;
        cin >> n;
        int arr[n-1];
        for(int i=0; i<n-1; i++)
            cin >> arr[i];
        int f;
        cin >> f;
        int found=0;
        int b[n];
        int mini=std::numeric_limits<int>::max();
        for(int i=0; i<n; i++)
        {
            int k=0, d=0;
            for(int j=0; j<n; j++)
            {
                if(j==i)
                    b[j]=-1;
                else
                    {
                        b[j]=arr[k];
                        k++;
                    }
            }
            /*for(int l=0; l<n; l++)
                cout << b[l] << " ";
            cout << endl;*/
            int counti=n;
            /*for(int j=0; j<n; j++)
            {
                if(counti==2)
                    break;*/
                for(int k=0; k<n; k++)
                {
                    if(k>=n)
                    {
                        k=-1;
                        continue;
                    }
                    if(b[k]==-1)
                        continue;
                    else if(b[k]==0)
                        k++;
                    else
                    {
                        int l=k+1;
                        for(; ; l++)
                        {
                            if(l>n-1)
                            {
                                l=-1;
                                continue;
                            }
                            if((b[l]!=0)&&(l!=k)&&(b[l]!=-1))
                            {
                                b[l]=0;
                                counti--;
                                break;
                            }
                            if((l!=k)&&(b[l]==-1))
                            {
                                d=d+b[k];
                            }
                        }
                    }
                    if(counti==2)
                        break;
                }
                int left;
                for(int j=0; j<n; j++)
                {
                    if((b[j]!=0)&&(b[j]!=-1))
                        left=b[j];
                        break;
                }
                if(f>=left)
                {
                    if(mini>d)
                    {
                        mini=d;
                        p=i+1;
                        found=1;
                    }
                }
                cout << left << " " << found << endl;
            //}
        }
        if(found==0)
            cout << "impossible" << endl;
        else
            cout << "possible" << endl << p << " " << mini << endl;
    }
    return 0;
}
