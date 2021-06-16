#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    ll h[26]={0};           // Declaring 26 size hash table as 26 characters in alphabets
    for(int i=0; i<a.size(); i++)
    {
        char k = a[i];                  //EX: a[i]= 'p', then k='p'.
        ll j = k-'A';                   // now j is an integer      also k-'a' means 'p'-'a' which will substract the ascii
                                                                    //value of p from a.
                                                                    //as to assign idex as follow a->0, b->1, c->2, d->3, .... , z->25
        h[j]++;
    }
    for(int i=0; i<b.size(); i++)
    {
        char k = b[i];
        ll j = k-'A';
        h[j]++;
    }
    ll pile[26]={0};
    for(int i=0; i<c.size(); i++)
    {
        char k = c[i];
        ll j = k-'A';
        pile[j]++;
    }
    int flag=0;             // declaring flag to check if all the number of char in a+b is equal to or no that in c
    for(int i=0; i<26; i++)
    {
        if(h[i]!=pile[i])       //if h[0]!=pile[0] this means that char 'a' present in string a & b  is not equal to that in c
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}
