#include <bits/stdc++.h>
#define ll long long int
#define debug(x) cerr << #x << " is " << x << " ";
#define mod 1000000007
#define endl "\n"
#define fast_input ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;


//source:::::::::::::GFG




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
    int t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int arr_c[n];
        for(int i=0; i<n; i++)
            arr_c[i]=arr[i];
        ll par = mergeSort(arr_c, n);
        //debug(par) cout << endl;
        if(par%2!=0)
            cout << "-1" << endl;
        else
        {
            /*int h[200001]={0};
            for(int i=0; i<n; i++)
            {
                h[arr[i]]=i+1;
            }*/
            set <pair <int, int> > s;
            for(int i=0; i<n; i++)
            {
                if(arr[i]==i+1)
                    continue;
                s.insert({i+1 , arr[i]});
            }
            //cout << s.size();
            vector <pair <pair <int, int>,int > > v;
            //debug(s.size());
            //cout << endl;
            while(s.size()>2)
            {
                //cout << endl;
                //debug(s.size())  cout << endl;
                /*cout << endl;
                for(auto ptr=s.begin(); ptr!=s.end(); ptr++)
                    cout << (*ptr).first << "->" << (*ptr).second << " ";
                cout << endl;*/
                int flag=0;
                auto it=s.begin();
                int p = (*it).first;
                int num = (*it).second;
                //cout << endl;
                //cout << "debugging it: " << (*it).first << " "  << (*it).second << endl;
                if(p==num)
                {
                    auto ptr = it;
                   // cout << "Element pre matched so skipped " << (*it).second  << endl;
                    s.erase(it);
                    continue;
                }
                int k = arr[num-1];
                int third=arr[k-1];
                int i, j;
                auto itr = s.begin();
                if(k==p)
                {
                    //Basic condition
                flag=0;
                itr=++it;
                it--;
                i = (*itr).first;
                j = (*itr).second;
                if(i==num)
                {
                    ++itr;
                    i = (*itr).first;
                    j = (*itr).second;
                    flag=1;
                }
                }
                else if(p==third)   //Triple sorting rotn
                {
                    if(k<num)   //Left rotn
                    {
                        i=k;
                        j=third;
                        flag=0;
                    }
                    else
                    {
                        i=k;
                        j=third;
                        flag=1;
                    }
                }
                else
                {
                    i=k;
                    j=third;
                    if(k<num)
                        flag=0;
                    else
                        flag=1;
                }
                /*cout << "debugging itrrrr: " << (*itr).first << " "  << (*itr).second << endl;
                debug(p);
                debug(num);
                debug(k);
                debug(i);
                debug(j);*/
                if(flag==0)             //Left rotn
                {
                    v.push_back({{p, num},i});
                    arr[num-1]=num;
                    arr[p-1]=j;
                    arr[i-1]=k;
                    pair <int, int> po;
                    po={p,j};
                    s.insert(po);
                    po={i,k};
                    s.insert(po);
                    po = {num,k};
                    s.erase(s.find(po));
                    po={p,num};
                    s.erase(s.find(po));
                    po={i,j};
                    s.erase(s.find(po));
                }
                else if(flag==1)
                {
                    v.push_back({{p, num},i});
                    arr[num-1]=num;
                    arr[p-1]=j;
                    arr[i-1]=k;
                    pair <int, int> po;
                    po={p,j};
                    s.insert(po);
                    po={i,k};
                    s.insert(po);
                    po = {num,k};
                    s.erase(s.find(po));
                    po={p,num};
                    s.erase(s.find(po));
                    po={i,j};
                    s.erase(s.find(po));
                }

            }
            //cout << endl;
            //cout << "ans" << endl;
            if(v.size()>k)
                cout << "-1" << endl;
            else
            {cout << v.size() << endl;
            for(int i=0; i<v.size(); i++)
            {
                cout << v[i].first.first << " " << v[i].first.second << " " << v[i].second << endl;
            }
            }
        }

    }
	return 0;
}
