#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;
    int sum=r+c;
    if((r==c)&&(c==1))
        cout << "0" << endl;
    else if((c==1))
    {
        for(int i=2; i<=sum; i++)
        {
            cout << i << endl;
        }
    }
    else
    {
        int arr1[c];
        //arr1[0]=2;
        int arr2[r];
        arr2[0]=1;
        int c1=0, c2=1;
        int flag=0;
        int a=0, b=2;
        for(int i=2; i<=sum; i++)
        {
            if(flag==1)
                break;
            if(c1>=c)
            {
                for(int j=i; j<=sum; j++)
                {
                    arr2[c2]=j;
                    c2++;
                }
                flag=1;
            }
            else if(c2>=r)
            {
                for(int j=i; j<=sum; j++)
                {
                    arr1[c1]=j;
                    c1++;
                }
                flag=1;
            }
            else
            {
                if((a!=2)&&(b==2))
                {
                    arr1[c1]=i;
                    c1++;
                    a++;
                    if(a==2)
                    {
                        a=2;
                        b=0;
                    }
                    continue;
                }
                if((b!=2)&&(a==2))
                {
                    arr2[c2]=i;
                    c2++;
                    b++;
                    if(b==2)
                    {
                        b=2;
                        a=0;
                    }
                }
            }
        }
        /*for(int i=0; i<c; i++)
            cout << arr1[i] << " ";
        cout << endl;
        for(int i=0; i<r; i++)
            cout << arr2[i] << " ";
        cout << endl;*/
        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cout << arr2[i]*arr1[j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
