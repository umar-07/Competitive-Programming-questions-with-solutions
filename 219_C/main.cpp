#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    char arr[k];
    int c=0;
    for(int i=0; i<k; i++)
    {
        int j=65+i;
        arr[i]=j;
    }
    if(k==2)
    {
        vector <char> a_s;
        vector <char> b_s;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                a_s.push_back('A');
                b_s.push_back('B');
            }
            else
            {
                b_s.push_back('A');
                a_s.push_back('B');
            }
        }
        int c1=0, c2=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]!=a_s[i])
                c1++;
            if(s[i]!=b_s[i])
                c2++;
        }
        if(c1>c2)
        {
            cout << c2 << endl;
            for(int i=0; i<n; i++)
                cout << b_s[i] ;
            cout << endl;
        }
        else
        {
            cout << c1 << endl;
            for(int i=0; i<n; i++)
                cout << a_s[i] ;
            cout << endl;
        }
    }
    else
{
     for(int i=0; i<n-1; i++)
    {
        if(i==0)
        {
            if(s[i]==s[i+1])
            {
                if(n>2)
                {
                    if(s[i+1]==s[i+2])
                    {
                        char b;
                        for(int j=0; j<k; j++)
                        {
                            if(arr[j]!=s[i+1])
                                b=arr[j];
                        }
                        s[i+1]=b;
                        c++;
                        i++;
                        continue;
                    }
                }
                for(int j=0; j<k; j++)
                {
                    if(arr[j]!=s[i])
                    {
                        s[i]=arr[j];
                        break;
                    }
                }
                c++;
                continue;
            }
        }
        if(s[i]==s[i+1])
        {
            if(s[i+1]==s[i+2] && i+2<n)
            {
                char b;
                for(int j=0; j<k; j++)
                {
                    if(arr[j]!=s[i+1])
                        b=arr[j];
                }
                s[i+1]=b;
                c++;
                i++;
                continue;
            }
            int flag=0;
            for(int j=0; j<k; j++)
            {
                if(arr[j]!=s[i+1] && arr[j]!=s[i+2] && i+2<n)
                {
                    s[i+1]=arr[j];
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                for(int j=0; j<k; j++)
                {
                    if(arr[j]!=s[i+1])
                    {
                        s[i+1]=arr[j];
                        flag=1;
                        break;
                    }
                }
            }
            c++;
            continue;
        }
    }
    if(s[n-2]==s[n-1])
    {
        for(int i=0; i<k; i++)
        {
            if(arr[i]!=s[n-1])
            {
                s[n-1]=arr[i];
                c++;
                break;
            }
        }
    }
    cout << c << endl;
    for(int i=0; i<n; i++)
        cout << s[i];
    cout << endl;
}
    return 0;
}
