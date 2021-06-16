#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;





//source :: GeeksForGeeks :: https://www.geeksforgeeks.org/counting-inversions/




ll _mergeSort(int arr[], int temp[], int left, int right);
int merge(int arr[], int temp[], int left, int mid, int right);

/* This function sorts the input array and returns the
number of inversions in the array */
ll mergeSort(int arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

/* An auxiliary recursive function that sorts the input array and
returns the number of inversions in the array. */
ll _mergeSort(int arr[], int temp[], int left, int right)
{
    ll mid, inv_count = 0;
    if (right > left) {
        /* Divide the array into two parts and
        call _mergeSortAndCountInv()
        for each of the parts */
        mid = (right + left) / 2;

        /* Inversion count will be sum of
        inversions in left-part, right-part
        and number of inversions in merging */
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        /*Merge the two parts*/
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

/* This funt merges two sorted arrays
and returns inversion count in the arrays.*/
int merge(int arr[], int temp[], int left,
          int mid, int right)
{
    int i, j, k;
    int inv_count = 0;

    i = left; /* i is index for left subarray*/
    j = mid; /* j is index for right subarray*/
    k = left; /* k is index for resultant merged subarray*/
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];

            /* this is tricky -- see above
            explanation/diagram for merge()*/
            inv_count = inv_count + (mid - i);
        }
    }

    /* Copy the remaining elements of left subarray
(if there are any) to temp*/
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    /* Copy the remaining elements of right subarray
(if there are any) to temp*/
    while (j <= right)
        temp[k++] = arr[j++];

    /*Copy back the merged elements to original array*/
    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}












int main()
{
        fast_input;
        ll t;
        cin>>t;
        while(t--)
        {
            ll n, k;
            cin >> n >> k;

            map <ll,ll> mapp;
            //debug(n)
            //debug(k)
            int arr[n];


            vector <pair <ll , pair <ll,ll> > > res;
            for(int i=0;i<n;i++)
            {
                ll x;
                cin >> x;
                mapp[i+1]=x;
                arr[i]=x;
            }
            ll par = mergeSort(arr, n);
            if(par%2!=0)
                cout << "-1" << endl;
            else
            {

           /* for(auto itr=m.begin(); itr!=m.end(); itr++)
                cout << *itr.first << " " << *itr.second << endl; */
            ll kapa=INT_MAX;
            ll xoxo=0;
            ll kup=INT_MIN;
            ll po=0;

            /*debug(kapa);
            debug(kup);
            debug(xoxo);
            debug(po);*/

            for(int i=1;i<=n;i++)
            {
                if(mapp[i]==i)
                    continue;
                 //debug(i)
                 //debug(m[i])
                 if(mapp[mapp[mapp[i]]]==i)
                 {
                     res.push_back({i,{mapp[i],mapp[mapp[i]]}});
                     xoxo++;
                     mapp[mapp[mapp[i]]]=mapp[mapp[i]];
                     mapp[mapp[i]]=mapp[i];
                     mapp[i]=i;
                 }

                 //cout << m[m[m[i]]] << " " << m[m[i]] << endl;
                 //debug(xoxo)

                 if(xoxo>k)
                 {
                     po=1;
                     break;
                 }

                 //debug(po)
            }



            for(int i=1;i<=n;i++)
            {
                 if(mapp[i]==i)
                    continue;
                 //debug(i)
                 //debug(m[i])
                 if(mapp[mapp[mapp[i]]]==i)
                 {
                     res.push_back({i,{mapp[i],mapp[mapp[i]]}});
                     xoxo++;
                     mapp[mapp[mapp[i]]]=mapp[mapp[i]];
                     mapp[mapp[i]]=mapp[i];
                     mapp[i]=i;
                 }


                 //cout << m[m[m[i]]] << " " << m[m[i]] << endl;
                 //debug(xoxo)

                else if(mapp[mapp[mapp[i]]]!=i && mapp[mapp[i]]!=i)
                 {
                     res.push_back({i,{mapp[i],mapp[mapp[i]]}});
                     xoxo++;
                     ll h= mapp[mapp[mapp[i]]];
                     mapp[mapp[mapp[i]]]=mapp[mapp[i]];
                     mapp[mapp[i]]=mapp[i];
                     mapp[i]=h;
                     i--;
                 }

                 //debug(i)
                 //debug(m[i])

                 //cout << m[m[m[i]]] << " " << m[m[i]] << endl;
                 //debug(xoxo)

                 if(xoxo>k)
                 {
                     po=1;
                     break;
                 }

                  //debug(i)
                 //debug(m[i])

                 //cout << m[m[m[i]]] << " " << m[m[i]] << endl;
                 //debug(xoxo)

                //debug(p)
            }





            if(xoxo<=k)
            {
            for(int i=1;i<=n;i++)
            {

                if(mapp[i]==i)
                    continue;
                //debug(i)
                else if(mapp[mapp[i]]==i)
                {
                    ll don=0;

                    ll one=i;


                    i++;
                //cout << "p" << endl;

                    while(mapp[i]==i || i==mapp[one])
                    {
                        i++;
                        if(i>n)
                        {
                            don=1;
                            break;
                        }
                    }

                    //debug(i)
                    if(don==1)
                    {
                        po=1;
                        break;
                    }

                    res.push_back({mapp[one],{one,i}});
                    //debug(one)
                    mapp[mapp[one]]=mapp[i];
                    //debug(m[one])
                    mapp[i]=mapp[one];
                    //debug(don)
                    mapp[one]=one;
                    //debug(one)
                    i=one;
                    //debug(one)
                    xoxo++;
                }


                  //debug(i)
                 //debug(m[i])

                 //cout << m[m[m[i]]] << " " << m[m[i]] << endl;
                 //debug(xoxo)

                else if(mapp[mapp[mapp[i]]]==i)
                 {
                     res.push_back({i,{mapp[i],mapp[mapp[i]]}});
                     xoxo++;
                     mapp[mapp[mapp[i]]]=mapp[mapp[i]];
                     mapp[mapp[i]]=mapp[i];
                     mapp[i]=i;
                 }

                  //debug(i)
                 //debug(m[i])

                 //cout << m[m[m[i]]] << " " << m[m[i]] << endl;
                 //debug(xoxo)

                 else if(mapp[mapp[mapp[i]]]!=i)
                 {
                     res.push_back({i,{mapp[i],mapp[mapp[i]]}});
                     xoxo++;
                     ll h= mapp[mapp[mapp[i]]];
                     mapp[mapp[mapp[i]]]=mapp[mapp[i]];
                     mapp[mapp[i]]=mapp[i];
                     mapp[i]=h;
                     i--;
                 }

                  //debug(i)
                 //debug(m[i])

                 //cout << m[m[m[i]]] << " " << m[m[i]] << endl;
                 //debug(xoxo)

                 if(xoxo>k)
                 {
                     po=1;
                     break;
                 }

                  //debug(i)
                 //debug(m[i])

                 //cout << m[m[m[i]]] << " " << m[m[i]] << endl;
                 //debug(xoxo)

                //debug(p)
            }
            }


                //debug(po)
                //debug(xoxo)

            if(po==1)
                cout << "-1" << endl;
            else
            {
                cout << xoxo << endl;
                for(auto itr=res.begin(); itr!=res.end(); itr++)
                {
                    cout << (*itr).first << " " << (*itr).second.first << " " << (*itr).second.second << endl;
                }
            }
        }
        }
}
