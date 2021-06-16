#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
        int n, counti=0;
        cin >> n;
        int arr[n];
        int pa[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n; i++)
        {
            pa[i] = arr[i];
        }
        for(int i=1; i<n; i++)
            pa[i]^=pa[i-1];
        /*for(int i=0; i<n; i++)
            cout << pa[i] <<" ";
        cout << endl;*/
        /*for(int i=0; i<n; i++)
        {
            if(pa[i]==0)
            {
                counti+=i;
            }
        }
        int h[1000001]={0};
        for(int i=0; i<n; i++)
        {
            h[pa[i]]++;
        }
        /*for(int i=0; i<100; i++)
            cout << h[i] <<" ";
        cout << endl;*/
        /*struct Node* head[n]={NULL};
        int u=0;
        for(int i=0; i<1000001; i++)
        {
            if(h[i]>1)
            {
                InsertAtStart(&head[u],i);
                u++;
            }
        }
        /*cout << "um" << endl;
        for(int i=0; i<n; i++)
        {
            if(head[i]!=NULL)
                cout << head[i] -> data;
            cout << "h" << endl;
        }*/
        /*for(int i=0; i<u; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(pa[j]==head[i]->data)
                    InsertAtEnd(&head[i], j);
            }
        }
        for(int i=0; i<u; i++)
        {
            struct Node* temp=head[i];
            temp=temp->next;
            struct Node* prev=temp;
            temp=temp->next;
            while(temp!=NULL)
            {
                counti+=temp->data - prev->data - 1;
                prev=temp;
                temp=temp->next;
            }
        }*/
        //cout << head[0]->next->data << " " << head[0]->next->next->data <<endl;
        //Print(&head);
        cout << counti << endl;
    }
    return 0;
}
