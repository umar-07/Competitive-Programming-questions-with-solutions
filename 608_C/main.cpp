#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll int n, sx, sy;
    cin >> n >> sx >> sy;
    ll int arr[n][2];
    for(int i=0; i<n; i++)
        cin >> arr[i][0] >> arr[i][1];
    ll int a=0, b=0, c=0, d=0;
    ll int up_x=sx, up_y=sy+1;
    ll int down_x=sx, down_y=sy-1;
    ll int right_x= sx+1, right_y=sy;
    ll int left_x = sx-1, left_y = sy;
    for(int i=0;  i<n; i++)
    {
        ll int d = abs(arr[i][0]-sx) + abs(arr[i][1]-sy);
        ll int d_a = abs(arr[i][0]-up_x) + abs(arr[i][1]-up_y) + 1;
        ll int d_b = abs(arr[i][0]-right_x) + abs(arr[i][1]-right_y) + 1;
        ll int d_c = abs(arr[i][0]-down_x) + abs(arr[i][1]-down_y) + 1;
        ll int d_d = abs(arr[i][0]-left_x) + abs(arr[i][1]-left_y) + 1;
        if(arr[i][1]>sy)
            {
                //cout << "at A: " << arr[i][0] << " " << arr[i][1] << endl;
                a++;
            }
        if(arr[i][0]>sx)
            {
                //cout << "at B: " << arr[i][0] << " " << arr[i][1] << endl;
                b++;
            }
        if(arr[i][1]<sy)
            {
                //cout << "at C: " << arr[i][0] << " " << arr[i][1] << endl;

                c++;
            }
        if(arr[i][0]<sx)
            {
                //cout << "at D: " << arr[i][0] << " " << arr[i][1] << endl;

                d++;
            }
    }
    /*if((sx==0)&&(sy==0))
    {
        ll int maxi = max(a, b);
        cout << maxi << endl;
        if((maxi==a) && ((up_x>=0)&&(up_y>=0)) && ((up_x<=1000000000)&&(up_y<=1000000000)))
            cout << up_x << " " << up_y << endl;
        else if((maxi==b)&& ((right_x>=0)&&(right_y>=0)) && ((right_x<=1000000000)&&(right_y<=1000000000)))
            cout << right_x << " " << right_y << endl;
    }
    else if((sx==1000000000)&&(sy==1000000000))
    {
        ll int maxi = max(c, d);
        cout << maxi << endl;
        if((maxi==c) &&((down_x>=0)&&(down_y>=0)) && ((down_x<=1000000000)&&(down_y<=1000000000)))
            cout << down_x << " " << down_y << endl;
        else if((maxi==d) &&((left_x>=0)&&(left_y>=0)) && ((left_x<=1000000000)&&(left_y<=1000000000)))
            cout << left_x << " " << left_y << endl;
    }
    else if((sx==0)&&(sy!=0))
    {
        ll int maxi = max(a, max(b, c));
        cout << maxi << endl;
        if((maxi==a) && ((up_x>=0)&&(up_y>=0)) && ((up_x<=1000000000)&&(up_y<=1000000000)))
            cout << up_x << " " << up_y << endl;
        else if((maxi==b)&& ((right_x>=0)&&(right_y>=0)) && ((right_x<=1000000000)&&(right_y<=1000000000)))
            cout << right_x << " " << right_y << endl;
        else if((maxi==c) &&((down_x>=0)&&(down_y>=0)) && ((down_x<=1000000000)&&(down_y<=1000000000)))
            cout << down_x << " " << down_y << endl;
    }
    else if((sx!=0)&&(sy==0))
    {
        ll int maxi = max(a, max(b, d));
        cout << maxi << endl;
        if((maxi==a) && ((up_x>=0)&&(up_y>=0)) && ((up_x<=1000000000)&&(up_y<=1000000000)))
            cout << up_x << " " << up_y << endl;
        else if((maxi==b)&& ((right_x>=0)&&(right_y>=0)) && ((right_x<=1000000000)&&(right_y<=1000000000)))
            cout << right_x << " " << right_y << endl;
        else if((maxi==d) &&((left_x>=0)&&(left_y>=0)) && ((left_x<=1000000000)&&(left_y<=1000000000)))
            cout << left_x << " " << left_y << endl;
    }
    else
    {*/
        ll int maxi = max(a, max(b, max(c, d)));
    cout << maxi << endl;
    if((maxi==a) && ((up_x>=0)&&(up_y>=0)) && ((up_x<=1000000000)&&(up_y<=1000000000)))
        cout << up_x << " " << up_y << endl;
    else if((maxi==b)&& ((right_x>=0)&&(right_y>=0)) && ((right_x<=1000000000)&&(right_y<=1000000000)))
        cout << right_x << " " << right_y << endl;
    else if((maxi==c) &&((down_x>=0)&&(down_y>=0)) && ((down_x<=1000000000)&&(down_y<=1000000000)))
        cout << down_x << " " << down_y << endl;
    else if((maxi==d) &&((left_x>=0)&&(left_y>=0)) && ((left_x<=1000000000)&&(left_y<=1000000000)))
        cout << left_x << " " << left_y << endl;


    //cout << "a: b: c: d: " << a << " " << b << " " << c << " " << d << endl;
    return 0;
}
