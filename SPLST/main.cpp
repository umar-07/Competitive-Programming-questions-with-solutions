#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int a, b, c, x, y, flag=0, count=0, flag1=0, flag2=0, flag3=0, flag4=0;
        cin >> a >> b >> c >> x >> y;
        if(1)
        {
            long long int k=x-b;
            if((k<=c+a-y)&&(a>=k))
                flag=1;
        }
        if(flag==0)
        {
            long long int k=x-c;
            if((k<=b+a-y)&&(a>=k))
                count=1;
        }
        if((flag==0)&&(count==0))
        {
            long long int k=x-a;
            if((k<=c+b-y)&&(b>=k))
                flag1=1;
        }
        if((flag==0)&&(count==0)&&(flag1==0))
        {
            long long int k=x-c;
            if((k<=a+b-y)&&(b>=k))
                flag2=1;
        }
        if((flag==0)&&(count==0)&&(flag1==0)&&(flag2==0))
        {
            long long int k=x-a;
            if((k<=b+c-y)&&(c>=k))
                flag3=1;
        }
        if((flag==0)&&(count==0)&&(flag1==0)&&(flag2==0)&&(flag3==0))
        {
            long long int k=x-b;
            if((k<=a+c-y)&&(c>=k))
                flag4=1;
        }
        if((flag==1)||(count==1)||(flag1==1)||(flag2==1)||(flag3==1)||(flag4==1))
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}
