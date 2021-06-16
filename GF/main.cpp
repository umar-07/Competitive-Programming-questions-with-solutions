#include <iostream>

using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}


int main()
{
    int num;
    int res=0;
    for(int i=2; i<100; i++)
    {
        int k = fib(i);
        int flag=0;
        for(int j=2; j<i; j++)
        {
            if(k%(fib(j))!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            res++;
            if(res==15)
            {
                num=i;
            }
        }
    }
    cout << num;
    return 0;
}
