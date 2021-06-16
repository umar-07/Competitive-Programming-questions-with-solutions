#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        string brr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            cin >> brr[i];
        }
        long long int val=0, sum=0, flag=0, res=0;
        long long int fin=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]==-1)
                continue;
            sum=0;
            if(arr[i]!=-1)
            {
                long long int b = arr[i];
                long long int s = brr[i].size();
                //int i=s;
                string st = brr[i];
                long long int j=0;
                while(s--)
                {
                    long long int l;
                    l = st[j];
                    if((l>=48)&&(l<=57))
                        l=l-48;
                    else
                    {
                        l=l-55;
                    }
                    sum=sum*b+l;
                    j++;
                }
               // cout << "sum :" << sum << " for base :" << arr[i] << endl;
            }
            if(val==0)
            {
                val=sum;
                continue;
            }
            else
            {
                if(sum!=val)
                {
                    res=1;
                    break;
                }
            }
        }
        //cout << "res: " << res << endl;
        //cout << "res :" << res << endl;
        if(res==1)
            cout << "-1" << endl;
        else
        {
            for(int j=0; j<n; j++)
            {
                if(arr[j]!=-1)
                    continue;
                long long int th=0;
                if(arr[j]==-1)
                {
                    string stri = brr[j];
                    long long int si = stri.size();
                    long long int maxii=0;
                    for(int mi=0; mi<si; mi++)
                    {
                        long long int di;
                        di = stri[mi];
                        if((di>=48)&&(di<=57))
                            di=di-48;
                        else
                        {
                            di=di-55;
                        }
                        if(di>maxii)
                            maxii=di;
                    }
                   // cout << "maxi: " << maxii << endl;
                    for(int i=maxii+1; i<=36; i++)
                    {
                        long long int sum1=0;
                        long long int h=0;
                        stri = brr[j];
                        si = stri.size();
                        while(si--)
                        {
                            long long int dig;
                            dig = stri[h];
                            if((dig>=48)&&(dig<=57))
                                dig=dig-48;
                            else
                            {
                                dig=dig-55;
                            }
                            sum1=sum1*i+ dig;
                            h++;
                        }
                       cout << "sum1 while base being: " << i << " : of strinrg : "  << brr[j] <<  " : "<< sum1 << endl;
                        //cout << "val: " << val << endl;
                        if(sum1!=val)
                            continue;
                        if(sum1 == val)
                        {
            //                cout << "th : " << th << endl;
                            th=1;
              //              cout << "th :" << th << endl;
                            break;
                        }
                    }
                //    cout << "th :" << th << endl;
                    if(th==0)
                    {
                        fin=1;
                        break;
                    }
                }
            }
            long long int mm=1000000000000;
            if((fin==1)||(val>mm))
                cout << "-1" << endl;
            else
                cout << val << endl;
        }
    }
    return 0;
}
