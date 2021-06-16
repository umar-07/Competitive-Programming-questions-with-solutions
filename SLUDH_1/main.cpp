#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n, m;
        cin >> n >> m;
        long long int c[m];
        for(int i=0; i<m; i++)
            cin >> c[i];
        long long int arr[n]={0};
        long long int d[n], f[n], b[n];
        for(int i=0; i<n; i++)
        {
            cin >> d[i] >> f[i] >> b[i];
        }
        long long int sum=0;
        map <long long int, long long int> v;
        map <long long int, long long int> :: iterator itr;
        for(int i=0; i<n; i++)
        {
            if(c[d[i]-1]!=0)
            {
                c[d[i]-1]--;
                arr[i]=d[i];
                sum+=f[i];
            }
            else
            {
                sum+=b[i];
            }
        }
        /*cout << endl;
        for(int i=0; i<m; i++)
            cout << c[i] << " ";
        cout << endl;*/
        for(int i=0; i<n; i++)
        {
            if(c[i]!=0)
            {
                v.insert(pair<long long int,long long int> (i+1,c[i]));
            }
        }
        itr=v.begin();
        /*cout << endl;
        for(int i=0; i<n; i++)
            cout << arr[i] << " ";
        cout << endl;*/
        for(int i=0; i<n; i++)
        {
            if(arr[i]==0)
            {
                //cout << "1" << endl;
                arr[i]=itr->first;
                itr->second--;
                if(itr->second==0)
                {
                    v.erase(v[0]);
                }
            }
        }
        cout << sum << endl;
        for(int i=0; i<n; i++)
            cout << arr[i] << " " ;
        cout << endl;
    }
    return 0;
}
