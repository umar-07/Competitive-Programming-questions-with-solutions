#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >>n;
        string arr[n];
        int totalcount=0;
        for(int i=0; i<n; i++)
        {
            string word;
            cin >> word;
            arr[i]=word;
            int l=word.size();
            int flag=0;
            if(i!=0)
            {
                for(int j=i; j>=0; j--)
                {
                    if(arr[i]==arr[j])
                    {
                        flag=1;
                        break;
                    }
                }
            }
                int count=2;
                for(int j=1; j<l; j++)
                {
                    if((word[j]=='d'&&word[j-1]=='d')||(word[j=='d']&&word[j-1]=='f'))
                    {
                        count=count+4;
                    }

                    else if((word[j]=='f'&&word[j-1]=='f')||(word[j=='f']&&word[j-1]=='f'))
                    {
                        count=count+4;
                    }
                    else if((word[j]=='j'&&word[j-1]=='j')||(word[j=='j']&&word[j-1]=='k'))
                    {
                        count=count+4;
                    }
                    else if((word[j]=='k'&&word[j-1]=='k')||(word[j=='k']&&word[j-1]=='j'))
                    {
                        count=count+4;
                    }
                    else
                        count=count+2;
                }
            if(flag==0)
            {
                totalcount=totalcount+count;
            }
            else
                totalcount=totalcount+(count/2);
        }
        cout << totalcount << endl;
    }
    return 0;
}
