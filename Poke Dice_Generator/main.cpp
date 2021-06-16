#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

char input[] = "input/input00.txt";
char output[] = "output/output00.txt";

void __input(int test_file)
{
	freopen(input, "w", stdout);

	ll t=1, i,j, n, m;

	if(test_file==0)
	{
	    t=6;
	    cout << t << endl;

		//1
		cout << 4 << endl;
		cout << 2 << endl;
		cout << 5 << " " << 32 << " " << 21 << " " << 200 << endl;

		//2
		cout << 4 << endl;
		cout << 1 << endl;
		cout << 5 << " " << 10 << " " << 50 << " " << 55 << endl;

		//3
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 5 << endl;

		//4
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 15 << endl;

		//5
		cout << 1 << endl;
		cout << 2 << endl;
		cout << 31 << endl;

		//6
		cout << 1 << endl;
		cout << 1 << endl;
		cout << 200 << endl;

	}
	else if(test_file==1)
	{
		t=100;
		cout << t << endl;
		for(i=1; i<=t; i++)
        {
            m=t;
            n=t*10;
            cout << n << endl;
            cout << m << endl;
            for( j=1; j<=n; j++)
            {
                cout << (((t*2)+1)+((j*7)+1)) << endl;
            }
        }
	}
	else
	{
		t=100;
		cout << t << endl;
		for( i=1; i<=t; i++)
        {
            m=1e10;
            n=t*10;
            cout << n << endl;
            cout << m << endl;
            for( j=1; j<=n; j++)
            {
                cout << (t*j*(j-1)+1e10)*10 << endl;
            }
        }
	}
}

void __output()
{
	freopen(input, "r", stdin);
	freopen(output, "w", stdout);

	ll t;
    cin >> t;
    assert(1 <= t && t <= 100);
    while(t--)
    {
        ll n, m;
        cin >> n;
        cin >> m;
        assert(1 <= n && n <= 1e4);
        assert(1 <= m && m <= 1e10);
        ll arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        ll mini = 5*m;
        ll maxi = 55*m;
        ll c=0;
        for(int i=0; i<n; i++)
        {
            if((arr[i]%5==0)&&(arr[i]>=mini)&&(arr[i]<=maxi))
                c++;
        }
        cout << c << endl;
    }
}

int32_t main()
{

	srand(time(0));
    int T = 3;
	for(int t = 0; t < T; ++t)
    {
		if(t == 10)
        {
			output[13] = input[11] = '1';
			output[14] = input[12] = '0';
		}
		else if(t > 0)
        {
			output[14]++;
            input[12]++;
        }

		__input(t);
		__output();
	}
	return 0;
}
