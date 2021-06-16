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
        string code;
        cin >> code;
        for(int i=0; i<n-1;)
        {
            char temp;
            temp = code[i];
            code[i]=code[i+1];
            code[i+1]=temp;
            i+=2;
        }
        for(int i=0; i<n; i++)
        {
            char temp;
            temp = code[i];
            if(temp=='a')
                code[i]='z';
            else if(temp=='b')
                code[i]='y';
            else if(temp=='c')
                code[i]='x';
            else if(temp=='d')
                code[i]='w';
            else if(temp=='e')
                code[i]='v';
            else if(temp=='f')
                code[i]='u';
            else if(temp=='g')
                code[i]='t';
            else if(temp=='h')
                code[i]='s';
            else if(temp=='i')
                code[i]='r';
            else if(temp=='j')
                code[i]='q';
            else if(temp=='k')
                code[i]='p';
            else if(temp=='l')
                code[i]='o';
            else if(temp=='m')
                code[i]='n';
            else if(temp=='n')
                code[i]='m';
            else if(temp=='o')
                code[i]='l';
            else if(temp=='r')
                code[i]='i';
            else if(temp=='s')
                code[i]='h';
            else if(temp=='t')
                code[i]='g';
            else if(temp=='u')
                code[i]='f';
            else if(temp=='v')
                code[i]='e';
            else if(temp=='w')
                code[i]='d';
            else if(temp=='x')
                code[i]='c';
            else if(temp=='y')
                code[i]='b';
            else if(temp=='z')
                code[i]='a';
            else if(temp=='p')
                code[i]='k';
            else if(temp=='q')
                code[i]='j';
        }
        cout << code << endl;
    }
    return 0;
}
