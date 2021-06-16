#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    vector < pair <int, int> > v;
    vector < pair <int, int> > :: iterator itr;
    for(int i=0; i<n; i++)
    {
        int j;
        for(j=i; j<n-1; j++)
        {
            if(arr[j]<arr[j+1])
                continue;
            else
                break;
        }
        //if(i!=j)
            v.push_back(make_pair(i,j));
        i=j;
    }
    int maxi=1;
    //for(itr=v.begin(); itr!=v.end(); itr++)
      //  cout << (*itr).first << " " << (*itr).second << endl;
    for(itr=v.begin(); itr!=(v.end()); itr++)
    {
        if((*itr).second-(*itr).first+1 > maxi)
            maxi=(*itr).second-(*itr).first+1;
    }
    for(itr=v.begin(); itr!=(v.end()-1); itr++)
    {
    //    cout << "andar" << endl;
        int counti=0;
        if((*(itr+1)).first-(*itr).second == 1)
        {
          //  cout << "1 satisfied" << endl;
            if(arr[(*itr).second-1]<arr[(*(itr+1)).first])
            {
                //cout << "inside" << endl;
            //    cout << (*itr).first << " " << (*(itr+1)).second << endl;
                counti=(*(itr+1)).second-(*itr).first;
            }
            if(counti>maxi)
                maxi=counti;
            if(arr[(*itr).second]<arr[(*(itr+1)).first+1])
            {
                //cout << "inseide2" << endl;
                counti=(*(itr+1)).second-(*itr).first;
            }
            if(counti>maxi)
                maxi=counti;
        }
    }
    cout << maxi << endl;
    return 0;
}
