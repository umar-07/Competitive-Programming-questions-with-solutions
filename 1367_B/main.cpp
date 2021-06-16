#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll q;
    cin >> q;
    while(q--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        /*

        if(post==1)
        {
            cout << -1 << endl;
            continue;
        }
        int e=0, o=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(arr[i]%2!=0)
                    e++;
            }
            if(i%2!=0)
            {
                if(arr[i]%2==0)
                    o++;
            }
        }





        */
        int evensssssssss_enec=0, odddddds=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
                evensssssssss_enec++;
            else
                odddddds++;
        }
        int post=0;
        if(n%2==0)
        {
            int k =n/2;
            if(evensssssssss_enec!=k || odddddds!=k)
            {
                post=1;
            }
        }

        //Of required

        //Nothing done

        if(n%2!=0)
        {
            int k=n/2;
            if(evensssssssss_enec!=(k+1) || odddddds!=k)
            {
                post=1;
            }
        }


        //Hello World
        //case-5
        //I thibk so
        //Changeing

        if(post==1)
        {
            cout << -1 << endl;
            continue;
        }
        int ef=0, of=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(arr[i]%2!=0)
                    ef++;
            }
            if(i%2!=0)
            {
                if(arr[i]%2==0)
                    of++;
            }
        }

        /*

        int evensssssssss_enec=0, odddddds=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]%2==0)
                evensssssssss_enec++;
            else
                odddddds++;
        }
        int post=0;
        if(n%2==0)
        {
            int k =n/2;
            if(evensssssssss_enec!=k || odddddds!=k)
            {
                post=1;
            }
        }

        */


        if(of!=ef)
        {
            cout << -1 << endl;
            continue;
        }

        cout << ef << endl;
        }
	return 0;
}
