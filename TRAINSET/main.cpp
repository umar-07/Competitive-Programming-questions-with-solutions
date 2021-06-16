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
        int zero[n]={0};
        int one[n]={0};
        string str[n];
        int counti=0;
        int i=0;
        for(int k=0; k<n; k++)
        {
            string s;
            int key;
            if(k==0)
            {
                cin >> str[i];
                cin >> key;
                if(key==0)
                    zero[i]++;
                else
                    one[i]++;
                i++;
                continue;
            }
            cin >> s;
            cin >> key;
            int flag=0;
            for(int j=i-1; j>=0; j--)
            {
                if(str[j]==s)
                {
                  //  cout << "mtach found" << endl;
                    flag=1;
                    if(key==0)
                        zero[j]++;
                    else
                        one[j]++;
                    break;
                }
            }
            if(flag==1)
                continue;
            if(flag==0)
            {
                //cout << "matach not found" <<  endl;
                str[i]=s;
                if(key==0)
                    zero[i]++;
                else
                    one[i]++;
                i++;
            }
            //cout<< "1";
        }
        int sum=0;
        //for(int k=0; k<i; k++)
          //  cout << str[k] << " " << zero[k] << " " << one[k] << endl;
        for(int k=0; k<i; k++)
        {
            int l = max(one[k], zero[k]);
            sum+=l;
        }
        cout << sum << endl;
    }
    return 0;
}
