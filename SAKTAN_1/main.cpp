#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        long long int odd1=0, odd2=0, even1=0, even2=0;
        int q;
        cin >> q;
        int arr1[100001]={0};
        int arr2[100001]={0};
        while(q--)
        {
            int a, b;
            cin >> a >> b;
            a-=1;
            b-=1;
            arr1[a]++;
            arr2[b]++;
        }
        for(int i=0; i<m; i++)
        {
            if(arr2[i]%2==0)
                even2++;
            else
                odd2++;
        }
        for(int i=0; i<n; i++)
        {
            if(arr1[i]%2==0)
                even1++;
            else
                odd1++;
        }
        long long int res;
        res=(odd1*even2)+(odd2*even1);
        cout << res << endl;
    }
    return 0;
}
