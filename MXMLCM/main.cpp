#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
      int n, m;
      cin >> n >> m;
      int h[m+1]={0};
      vector <int> arr;
      for(int i=0; i<n; i++)
      {
          int temp;
          cin >> temp;
          if(h[temp]==1)
            continue;
          else
          {
              arr.push_back(temp);
              h[temp]=1;
              continue;
          }
      }
      int l = arr.size();
      sort(arr.begin(), arr.end());
      int flag=0;
      for(int i=1; i<=m; i++)
      {
          if(h[i]==0)
          {
              flag=1;
              break;
          }
      }
      if(flag==0)
        cout << "1" << endl;
      else
      {
          vector <int> v;
          for(int i=1; i<=m; i++)
          {
              if(h[i]==0)
                v.push_back(i);
          }

            /*cout << "Elements not present: " << endl;
            for(int i=0; i<v.size(); i++)
                cout << v[i] << " ";
            cout << endl;*/
          if(v.size()==1)
          {
              cout << v[0] << endl;
          }
          else
          {
              set <int> fact;
              for(int i=0; i<arr.size(); i++)
              {
                  int k = arr[i];
                  for(int i=1; i<sqrt(k); i++)
                  {
                      if(k%i==0)
                      {
                          if(k/i==i)
                            fact.insert(i);
                          else
                          {
                              fact.insert(i);
                              fact.insert(k/i);
                          }
                      }
                  }
              }
              /*set <int> :: iterator itt;
              cout << "FACT: " << endl;
              for(itt=fact.begin(); itt!=fact.end(); itt++)
                cout << *itt << " ";
              cout << endl;*/
              //MESSED UP
              ll maxi=1;
              ll num=1;
              for(int i=0; i<v.size(); i++)
              {
                  set <int> s;
                  int k = v[i];
                  ll x = v[i];
                  for(int j=1; j<sqrt(k); j++)
                  {
                      if(k%j==0)
                      {
                          if(k/j==j)
                            s.insert(j);
                          else
                          {
                              s.insert(j);
                              s.insert(k/j);
                          }
                      }
                  }
                    /*set <int> :: iterator itt1;
                    cout << "factors before removing of: " << v[i] << endl;
                    for(itt1=s.begin(); itt1!=s.end(); itt1++)
                        cout << *itt1 << " ";
                    cout << endl;*/
                  set <int> :: reverse_iterator itr;
                  set <int> div;
                  set <int> :: iterator um;
                  for(itr=s.rbegin(); itr!=s.rend(); itr++)
                  {
                      if(fact.find(*itr)==fact.end())
                        continue;
                      else
                      {
                          if(*itr == 1)
                            continue;
                          int fl=0;
                          for(um=div.begin(); um!=div.end(); um++)
                          {
                              if((*um)%(*itr)==0)
                                fl=1;
                          }
                          if(fl==1)
                            continue;
                          //cout << "Dividing x by:  " << *itr << endl;
                          x=x/(*itr);
                          div.insert(*itr);
                      }
                  }
                  ll mult=1;
                  /*set <int> :: iterator it;
                  for(it=s.begin(); it!=s.end(); it++)
                  {
                      mult*=(*it);
                  }*/
                  /*cout << "factors after removing of: " << v[i] << endl;
                    for(itt1=s.begin(); itt1!=s.end(); itt1++)
                        cout << *itt1 << " ";
                    cout << endl;
                  cout << "after lcm : " << x << endl;*/
                  //cout << "value of x: " << x << endl;
                  if(x>maxi)
                  {
                      maxi=x;
                      num=v[i];
                  }
              }
              cout << num << endl;
          }
      }
    }
    return 0;
}
