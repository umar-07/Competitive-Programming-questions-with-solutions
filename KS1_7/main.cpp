#include <bits/stdc++.h>
#include<vector>
using namespace std;

struct Node
{
	int data;
	struct Node* next=NULL;
};

void InsertAtStart(struct Node** head, int data) //head is struct node and not int
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	if(*head==NULL)
	{
		*head=new_node; //this is worng--- **head=new_node->next;
		new_node->next=NULL;
	}
	else
	{
		new_node->next=(*head);
		(*head)=new_node;
	}
}


void Print(struct Node** head)// arguement passed must be **head and not *head, don't know why?
{
	struct Node* temp=*head;
	while(temp->next!=NULL)
	{
		printf("%d\n", temp->data);
		temp=temp->next;
	}
	printf("%d\n", temp->data);
}


void InsertAtEnd(struct Node** head, int data) // arguement passed must be **head and not *head, don't know why?
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	struct Node* prev;
	struct Node* temp=(*head);
	new_node->data=data;
	while(temp -> next!=NULL)
	{
		temp=temp->next; // this takes the temp pointer to point to the NODE that next is pointing;
	}
	temp->next=new_node;// and not temp->next=new_node->next;
	new_node->next=NULL;
}


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
        for(int i=0; i<n; i++)
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
        struct Node* head[n]={NULL};
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
        for(int i=0; i<u; i++)
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
            struct Node* temp2;
            temp=temp->next;
            while(temp->next!=NULL)
            {
                temp2=temp->next;
                while(temp2!=NULL)
                {
                    counti+=temp2->data-temp->data -1;
                    temp2=temp2->next;
                }
                temp=temp->next;
            }
        }
        //cout << head[0]->next->data << " " << head[0]->next->next->data <<endl;
        //Print(&head);
        cout << counti << endl;
    }
    return 0;
}
