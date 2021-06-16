#include <bits/stdc++.h>

using namespace std;


void addition(vector <int> a, vector <int> b)
{
    int n = a.size();
    int m = b.size();
    vector <int> res;
    int carry=0;
    int i;
    for(i=0; i<n && i<m; i++)
    {
        int k = a[i]+b[i]+carry;
        carry=0;
        if(k>9)
        {
            carry=1;
            k=k-10;
        }
        res.push_back(k);
    }
    if(n>m)
    {
        while(i<n)
        {
            int k = a[i]+carry;
            carry=0;
            if(k>9)
            {
                carry=1;
                k=k-10;
            }
            res.push_back(k);
            i++;
        }
    }
    else if(m>n)
    {
        while(i<m)
        {
            int k = b[i]+carry;
            carry=0;
            if(k>9)
            {
                carry=1;
                k=k-10;
            }
            res.push_back(k);
            i++;
        }
    }
    if(carry==1)
        res.push_back(1);
    int l = res.size();
    m++;
    if(m>l)
    {
        l=m;
    }
    int sp;
    sp=l-n;

    //PRINTING
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(res.begin(), res.end());
    for(int i=0; i<sp; i++)
        cout << " ";
    for(int i=0; i<n; i++)
        cout << a[i];
    cout << endl;
    sp=l-m;
    for(int i=0; i<sp; i++)
        cout << " ";
    cout << "+";
    for(int i=0; i<m-1; i++)
        cout << b[i];
    cout << endl;
    for(int i=0; i<l; i++)
        cout << "-";
    cout << endl;
    sp=l-res.size();
    for(int i=0; i<sp; i++)
        cout << " ";
    for(int i=0; i<res.size(); i++)
        cout << res[i];
    cout << endl;
    return;
}


void substraction(vector <int> a, vector <int> b)
{
    int n = a.size();
    int m = b.size();
    vector <int> res;
    int borrow=0;
    int i=0;
    for(i=0; i<n && i<m; i++)
    {
        int k = a[i]-b[i]-borrow;
        borrow=0;
        if(k<0)
        {
            k=k+10;
            borrow=1;
        }
        res.push_back(k);
    }
    if(n>m)
    {
        while(i<n)
        {
            int k = a[i]-borrow;
            borrow=0;
            if(k<0)
            {
                k=k+10;
                borrow=1;
            }
            res.push_back(k);
            i++;
        }
    }
    if(m>n)
    {
        while(i<m)
        {
            int k = b[i]-borrow;
            borrow=0;
            if(k<0)
            {
                k=k+10;
                borrow=1;
            }
            res.push_back(k);
            i++;
        }
    }
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(res.begin(), res.end());
    int new_b = m+1;
    int l = res.size();
    int maxi = max(l, max(n, new_b));
    int sp;
    sp=maxi-n;
    for(int i=0; i<sp; i++)
        cout << " ";
    for(int i=0; i<n; i++)
        cout << a[i];
    cout << endl;
    sp=maxi-new_b;
    for(int i=0; i<sp; i++)
        cout << " ";
    cout << "-";
    for(int i=0; i<m; i++)
        cout << b[i];
    cout << endl;
    for(int i=0; i<maxi; i++)
        cout << "-";
    cout << endl;
    sp=maxi-l;
    for(int i=0; i<sp; i++)
        cout << " ";
    for(int i=0; i<l; i++)
        cout << res[i];
    cout << endl;
    return;
    // case not considered x-x=0, gives output 00...000 |x| times.
}

void multiplication(vector <int> a, vector <int> b)
{
    int n = a.size();
    int m = b.size();
    int r = m;
    vector <int> res[r];
    for(int i=0; i<r; i++)
    {
        int carry=0;
        for(int j=0; j<n; j++)
        {
            int k = (b[i]*a[j])+carry;
            if(k==0)
            {
                res[i].push_back(0);
                carry=0;
                continue;
            }
            carry=0;
            int d, rem;
            int digit=0;
            int x=k;
            while(x>0)
            {
                x=x/10;
                digit++;
            }
            if(digit==1)
            {
                res[i].push_back(k);
            }
            else if(digit==2)
            {
                d=k%10;
                rem=k/10;
                carry=rem;
                res[i].push_back(d);
            }
        }
        if(carry!=0)
            res[i].push_back(carry);
    }
    /*for(int i=0; i<m; i++)
    {
        for(int j=0; j<res[i].size(); j++)
            cout << res[i][j];
        cout << endl;
    }*/
    vector <int> res2[m];
    for(int i=0; i<m; i++)
    {
        res2[i]=res[i];
        reverse(res2[i].begin(), res2[i].end());
        for(int j=0; j<i; j++)
            res2[i].push_back(0);
        reverse(res2[i].begin(), res2[i].end());
    }
    //FINAL SUM

    vector <int> sum[m];
    sum[0]=res2[0];
    vector <int> d1;
    vector <int> d2;
    for(int j=1; j<m; j++)
    {
        d1=sum[j-1];
        d2=res2[j];
       /* cout << endl;
        cout << "step j th: " << j <<endl;
        for(int hey=0; hey<d1.size(); hey++)
            cout << d1[hey];
        cout << endl;
        for(int hey=0; hey<d2.size(); hey++)
            cout << d2[hey];
        cout << endl;*/
        int n1 = d1.size();
    int m1 = d2.size();
    int carry=0;
    int i;
    for(i=0; i<n1 && i<m1; i++)
    {
        int k = d1[i]+d2[i]+carry;
        carry=0;
        if(k>9)
        {
            carry=1;
            k=k-10;
        }
        sum[j].push_back(k);
    }
    if(n1>m1)
    {
        while(i<n1)
        {
            int k = d1[i]+carry;
            carry=0;
            if(k>9)
            {
                carry=1;
                k=k-10;
            }
            sum[j].push_back(k);
            i++;
        }
    }
    else if(m1>n1)
    {
        while(i<m1)
        {
            int k = d2[i]+carry;
            carry=0;
            if(k>9)
            {
                carry=1;
                k=k-10;
            }
            sum[j].push_back(k);
            i++;
        }
    }
    if(carry==1)
        sum[j].push_back(1);
    }

    /*cout <<"SUM" << endl;
    for(int j=0; j<m; j++)
    {
        for(int i=0; i<sum[j].size(); i++)
        cout << sum[j][i];
    cout << endl;
    }*/
    /*for(int i=0; i<sum[m-1].size(); i++)
        cout << sum[m-1][i] ;
    cout << endl;*/
    vector <int> fin = sum[m-1];

    //PRINTING
    for(int i=0; i<m; i++)
        reverse(res[i].begin(), res[i].end());
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    reverse(fin.begin(), fin.end());
    int new_b=m+1;
    int s[m]={0};
    for(int i=0; i<m; i++)
    {
        s[i]=res[i].size()+i;
    }
    int maxi=max(new_b,n);
    for(int i=0; i<m; i++)
    {
        if(s[i]>maxi)
            maxi=s[i];
    }
    int sz = fin.size();
    if(sz>maxi)
        maxi=sz;
    //cout << "maxi: "  << maxi << endl;
    int sp;
    sp=maxi-n;
    for(int i=0; i<sp; i++)
        cout << " ";
    for(int i=0; i<n; i++)
        cout << a[i];
    cout << endl;
    sp=maxi-new_b;
    for(int i=0; i<sp; i++)
        cout << " ";
    cout << "*";
    for(int i=0; i<m; i++)
        cout << b[i];
    cout << endl;
    if(m>1)
    {
        for(int i=0; i<sp; i++)
        cout << " ";
    for(int i=0; i<new_b; i++)
        cout << "-";
    cout << endl;
    }
    for(int i=0; i<m; i++)
    {
        sp=maxi-s[i];
        //cout << "s[i]: " << s[i] << "  at i: " << i << endl;
        //cout << "sp: " << sp << endl;
        for(int k=0; k<sp; k++)
            cout << " ";
        for(int j=0; j<res[i].size(); j++)
            cout << res[i][j];
        cout << endl;
    }
    for(int i=0; i<maxi; i++)
        cout << "-";
    sp=maxi-sz;
    for(int i=0; i<sp; i++)
        cout << " ";
    cout << endl;
    for(int i=0; i<fin.size(); i++)
        cout << fin[i];
    cout << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        vector <int> a;
        vector <int> b;
        int flag=0;
        char op;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='+' || s[i]=='-' || s[i]=='*')
            {
                op=s[i];
                flag=1;
                continue;
            }
            if(flag==0)
                a.push_back(s[i]-48);
            else if(flag==1)
                b.push_back(s[i]-48);
        }
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        if(op=='+')
            {
                addition(a, b);
                cout << endl;
            }
        else if(op=='-')
            {
                substraction(a, b);
                cout << endl;
            }
        else if(op=='*')
            {
                multiplication(a, b);
                cout << endl;
            }
    }
    return 0;
}
