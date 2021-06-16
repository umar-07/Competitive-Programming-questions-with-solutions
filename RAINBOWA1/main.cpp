#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, elem, found=0, of=1, sf=0, cs=0;
        cin >> n;
        int arr[n];
        int eleme[8]={0};
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            if(arr[i]==7)
                sf=1;
        }
        int a[7]={0};
        int b[7]={0};
        for(int i=0; i<n; i++)
        {
            if((arr[i]<=7)&&(arr[i]>0))
            {
                continue;
            }
            else
            {
                found=1;
                break;
            }
        }
        int flag1=0, flag2=0;
        if(found==0)
        {
            for(int i=0; i<n; i++)
            {
                eleme[arr[i]]=1;
            }
            int countk=0;
            for(int i=1; i<8; i++)
            {
                if(eleme[i]==1)
                    countk++;
                    elem=i;
            }
            if(countk==1)
                of=0;
            else
                of=1;
        }
        //cout << of << endl;
        if((found==0)&&(of!=0))
        {
            for(int i=0; i<n-1; i++)
            {
                if(flag2==1)
                {
                    if(arr[i]<arr[i+1])
                        flag1=2;
                        break;
                }
                if(arr[i]<arr[i+1])
                    flag1=1;
                if(flag1==1)
                {
                    if(arr[i]>arr[i+1])
                        flag2=1;
                }
            }
        }
        //cout << of << " " << found << endl;
        if(of==1)
            if((flag1==flag2)&&(flag1==1))
                found=0;
            else
                found=1;
        //cout << found << endl;
        //cout << found << " " << of << " " << sf << " " << endl;
        if(found==0)
        {
            //cout << of << endl;
            if((sf==1)&&(of==1))
            {
                //cout << "1" << endl;
                int i;
                for(i=0; ; i++)
                {
                    if(arr[i]==7)
                        break;
                    else
                    {
                        a[arr[i]]+=1;
                    }
                }
                for(; i<n; i++)
                {
                    if(arr[i]!=7)
                        break;
                }
                for(; i<n; i++)
                {
                    b[arr[i]]+=1;
                }

            /*cout << found << endl;
            for(int i=1; i<7; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
            for(int i=1; i<7; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            cout << found << endl;*/
            }
            else if(of==0)
            {
              //  cout << "uj" << endl;
                int counti=0;
                for(int i=0; i<n; i++)
                {
                 if(arr[i]==elem)
                        counti++;
                }
                if(counti%2==0)
                    found=0;
                else
                    found=1;
            }
            else
            {
                int i=0;
                int prev;
                for(; i<n; i++)
                {
                    if(i!=0)
                    {
                        if(arr[i]<arr[i-1])
                        {
                            prev=arr[i-1];
                            break;
                        }
                    }
                }
                //cout << prev << endl;
                int co=0;
                for(int j=0; j<n; j++)
                {
                    if(arr[j]==prev)
                        co++;
                }
                //cout << co << endl;
                if(co%2==0)
                    found=0;
                else
                    found=1;
                i=0;
                for(; i<n; i++)
                {
                    if(arr[i]==prev)
                        break;
                    else
                    {
                        a[arr[i]]+=1;
                    }
                }
                for(; i<n; i++)
                {
                    if(arr[i]!=prev)
                        break;
                }
                for(; i<n; i++)
                {
                    b[arr[i]]+=1;
                }
                //cout << found << endl;
            }
        }
        if(found==0)
        {
            if((a[1]==b[1])&&(a[2]==b[2])&&(a[3]==b[3])&&(a[4]==b[4])&&(a[5]==b[5])&&(a[6]==b[6]))
                found=0;
            else
                found=1;
        }
        if(found==0)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
