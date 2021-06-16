#include <bits/stdc++.h>

using namespace std;




long long int val(char c)
{
    if (c >= '0' && c <= '9')
        return (long long int)c - '0';
    else
        return (long long int)c - 'A' + 10;
}

// Function to convert a number from given base 'b'
// to decimal
long long int toDeci(string str, long long int base)
{
    long long int len = str.size();
    long long int power = 1; // Initialize power of base
    long long int num = 0;  // Initialize result
    long long int i;

    // Decimal equivalent is str[len-1]*1 +
    // str[len-1]*base + str[len-1]*(base^2) + ...
    for (i = len - 1; i >= 0; i--)
    {
        // A digit in input number must be
        // less than number's base
        if (val(str[i]) >= base)
        {
            return -1;
        }

        num += val(str[i]) * power;
        power = power * base;
    }

    return num;
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
            string stri  = brr[i];
            long long int sum = toDeci(stri, arr[i]);
            //cout << sum << endl;
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
                        stri = brr[j];
                        sum1 = toDeci(stri,i);
                        //cout << "sum1 while base being: " << i << " : of strinrg : "  << brr[j] <<  " : "<< sum1 << endl;
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
