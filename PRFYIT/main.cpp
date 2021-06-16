#include <bits/stdc++.h>

using namespace std;



int count_forward(vector <int> v, int key, int index, int n)
{
    int f=0;
    if(index==n-1)
        return 0;
    for(int k=index+1; k<n; k++)
    {
        if(v[k]==key)
        {
            f++;
            continue;
        }
        else
        {
            f--;
            break;
        }
    }
    return f;
}

int count_backward(vector <int> v, int key, int index, int n)
{
    int b=0;
    if(index==0)
        return 0;
    for(int k=index-1; k>=0; k--)
    {
        if(v[k]==key)
        {
            b++;
            continue;
        }
        else
        {
            b--;
            break;
        }
    }
    return b;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int n =s.size();
        vector <int> v;
        vector <int> :: iterator itr;
        for(int i=0; i<n; i++)
            v.push_back(s[i]-48);
        int del=0;
        if((n==1)||(n==2)||(n==3))
            cout << "0" << endl;
        else
        {
            for(int i=0; i<n-2; i++)
            {
                int flag=0;
               // cout << endl << endl;
                map < int,  pair <int, int> > arr;
                map < int,  pair <int, int> > :: iterator ptr=arr.begin();
                int f=0, b=0;
                if(v[i]==1)
                {
                    int id;
                    int f = count_forward(v, 1, i, n);
                    int b = count_backward(v, 1, i, n);
                    arr.insert( pair <int, pair <int, int> >( i, make_pair(v[i], (f+b)) ));
                    for(int j=i+1; j<n; j++)
                    {
                        if((arr.size()==1)||(arr.size()==3))
                        {
                            if(v[j]==0)
                            {
                                int f1 = count_forward(v, 0, j, n);
                                int b1 = count_backward(v, 0, j, n);
                                arr.insert( pair <int, pair <int, int> >( j, make_pair(v[j], (f1+b1)) ));
                            }
                        }
                        if(arr.size()==2)
                        {
                            if(v[j]==1)
                            {
                                int f1 = count_forward(v, 1, j, n);
                                int b1 = count_backward(v, 1, j, n);
                                arr.insert( pair <int, pair <int, int> >( j, make_pair(v[j], (f1+b1)) ));
                            }
                        }
                        if(arr.size()==4)
                        {
                            int mini = ptr->second.second;
                            id=ptr->first;
                            for(ptr=arr.begin(); ptr!=arr.end(); ptr++)
                            {
                                if(ptr->second.second<mini)
                                {
                                    mini=ptr->second.second;
                                    id=ptr->first;
                                }
                            }
                            break;
                        }
                    }
                 /*   cout << "arr:   " << endl;
                    for(ptr=arr.begin(); ptr!=arr.end(); ptr++)
                    {
                        cout << "index: " << ptr->first << " number: " << ptr->second.first << " having bounday values: " << ptr->second.second << endl;
                    }*/
                    if(arr.size()==4)
                    {
                       // cout << "Deleting: " << *(v.begin()+id) << " from: " << id << endl;
                        v.erase(v.begin()+id);
                        del++;
                        if(id==i)
                        {
                         //   cout << "Deleting ith" << endl;
                            i--;
                            n--;
                        }
                        if(id!=i)
                            {
                                n--;
                                flag=1;
                           //     cout << "reducing n to : " << n << endl;
                            }
                    }
                }
                else
                {
                    int id;
                    int f = count_forward(v, 0, i, n);
                    int b = count_backward(v, 0, i, n);
                    arr.insert( pair <int, pair <int, int> >( i, make_pair(v[i], (f+b)) ));
                    for(int j=i+1; j<n; j++)
                    {
                        if((arr.size()==1)||(arr.size()==3))
                        {
                            if(v[j]==1)
                            {
                                int f1 = count_forward(v, 1, j, n);
                                int b1 = count_backward(v, 1, j, n);
                                arr.insert( pair <int, pair <int, int> >( j, make_pair(v[j], (f1+b1)) ));
                            }
                        }
                        if(arr.size()==2)
                        {
                            if(v[j]==0)
                            {
                                int f1 = count_forward(v, 0, j, n);
                                int b1 = count_backward(v, 0, j, n);
                                arr.insert( pair <int, pair <int, int> >( j, make_pair(v[j], (f1+b1)) ));
                            }
                        }
                        if(arr.size()==4)
                        {
                            int mini = ptr->second.second;
                            id=ptr->first;
                            for(ptr=arr.begin(); ptr!=arr.end(); ptr++)
                            {
                                if(ptr->second.second<mini)
                                {
                                    mini=ptr->second.second;
                                    id=ptr->first;
                                }
                            }
                            break;
                        }
                    }
                    /*cout << "arr:   " << endl;
                    for(ptr=arr.begin(); ptr!=arr.end(); ptr++)
                    {
                        cout << "index: " << ptr->first << " number: " << ptr->second.first << " having bounday values: " << ptr->second.second << endl;
                    }*/
                    if(arr.size()==4)
                    {
                       // cout << "Deleting: " << *(v.begin()+id) << " from: " << id << endl;
                        v.erase(v.begin()+id);
                        del++;
                        if(id==i)
                        {
                            i--;
                         //   cout << "Deleting ith" << endl;
                            n--;
                        }
                        if(id!=i)
                            {
                                n--;
                                flag=1;
                        //        cout << "Reducing n to: " << n << endl;
                            }
                    }
                }
               /*for(int i=0; i<n; i++)
                    cout << v[i] << " ";
                cout << endl;*/
                if(flag==1)
                    {
                        i--;
                    }
            //    cout << "i: " << i << endl;
            if(i<-1)
                i=-1;
            if(i>=n-2)
                break;
            }
            cout << del << endl;
        }
    }
    return 0;
}
