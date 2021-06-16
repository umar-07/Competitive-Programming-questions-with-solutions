#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int res=0;
    for(int i=2; i<=2000; i+=2)
    {
        vector <int> v1;
        vector <int> v2;
        for(int j=1; j<=(i/2); j++)
            v1.push_back(j);
        for(int j=(i/2); j<=i; j++)
            v2.push_back(j);
        long long int sum=0;
        //cout << "UM" << endl;
        vector <int> :: iterator itr1=v1.begin();
        vector <int> :: iterator itr2=v2.end()-1;
        //cout << v1.size() << " " << v2.size() << endl;
        while(itr1!=v1.end())
        {
            //cout << "a";
            sum = sum + abs((*itr1)-(*itr2));
            //cout << sum << endl;
            itr1++;
            itr2--;
        }
        cout << sum << endl;
        res+=sum;
    }
    cout << res << endl;
    return 0;
}
