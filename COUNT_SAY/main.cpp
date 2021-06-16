#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
using namespace std;

string countAndSay(int A) {
    if(A==1)
        return "1";
    string s="1";
    for(int i=2; i<=A; i++)
    {
        string str=s;
        string new_string;

        //cout << endl << endl;
        //cout << i << endl;

        for(int j=0; j<str.size(); j++)
        {
            char ch=str[j];
            int freq=0;

            //debug(ch);

            int k=j;
            while(str[k]==ch)
            {
                freq++;
                k++;
            }

            //debug(freq);
            //cout << endl;

            j=k-1;

            //debug(j) cout << "after while" << endl;

            string f = to_string(freq);

            //debug(f) cout << endl;

            for(int l=0; l<f.size(); l++)
            {
                new_string.push_back(f[l]);
            }
            new_string.push_back(ch);

            //debug(new_string) cout << endl;
        }
        s=new_string;
    }
    return s;
}



int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str=countAndSay(n);
        cout << str << endl;
    }
    return 0;
}
