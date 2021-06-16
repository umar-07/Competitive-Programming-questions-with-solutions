#include <bits/stdc++.h>
#include<vector>
using namespace std;

struct Node
{
	int data;
	int countr;
	struct Node* next=NULL; // next is struct node and not int
	int red[100]={0};
};

void InsertAtStart(struct Node** head, int data, int c) //head is struct node and not int
{
	struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
	new_node->data=data;
	new_node->countr=c;
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

int counting(struct Node** head, int arr[], int n)
{
    struct Node* temp=*head;
    while(temp!=NULL)
    {
        //cout << "h" << endl;
        for(int i=0; i<n; i++)
        {
            int j=1;
            cout << arr[i] << " " ;
            if(arr[i]==temp->data)
            {
                temp->red[j]=i;
                cout << endl << i << " " << endl ;
                j++;
            }
        }
        cout << endl;
        temp=temp->next;
    }
    temp=*head;
    cout << temp->countr << endl;
    int sizee= temp->countr;
    while(temp!=NULL)
    {
        for(int k=; k< sizee; k++)
        {
            cout << "no 1" << endl;
            cout << temp->red[k] <<" ";
        }
        cout << endl;
        temp=temp->next;
    }
    return 0;
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
        for(int i=0; i<n; i++)
            cout << pa[i] <<" ";
        cout << endl;
        for(int i=0; i<n; i++)
        {
            if(pa[i]==0)
            {
                counti+=i;
            }
        }
        int h[100]={0};
        for(int i=0; i<n; i++)
        {
            h[pa[i]]++;
        }
        /*for(int i=0; i<100; i++)
            cout << h[i] <<" ";
        cout << endl;*/
        struct Node* head=NULL;
        for(int i=0; i<100; i++)
        {
            if(h[i]>1)
            {
                int c=h[i];
                InsertAtStart(&head, i, c);
            }
        }
        //Print(&head);
        int lo=counting(&head, pa, n);
        cout << counti << endl;
    }
    return 0;
}
