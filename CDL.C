#include<stdlib.h>
struct node
{
 int data;
 struct node *next,*prev;
};
 struct node * create(struct node* head)
 {
   int i,n;
  struct node *temp,*newnode;
    printf("enter limit");
    scanf("%d",&n);
    for(i=0;i<n;i++)
   {
   newnode=(struct node*)malloc(sizeof(struct node));
   scanf("%d",&newnode->data);
   newnode->next=NULL;
    if(head==NULL)
     {
      head=temp=newnode;
     }
    else
    {
     temp->next=newnode;
      newnode->prev=temp;
      temp=newnode;
    }
  }
   return head;
 }

 void disp(struct node *head)
  {
   struct node *temp=head;
    while(temp!=NULL)
     {
      printf("%d \t",temp->data);
       temp=temp->next;
     }
 }
 struct node *insert(struct node * head,int val,int pos)
  {
   struct node *newnode,*temp;
     int i;
    newnode=(struct node *)malloc(sizeof(struct node));
     newnode->data=val;
     if(pos==1)
    { newnode->next=head;
      head->prev=newnode;
      head=newnode;
    }
    else
    {
     for(i=1,temp=head;i<pos-1&&temp->next!=NULL;i++,temp=temp->next);
	 newnode->next=temp->next;
	 temp->next->prev=newnode;
	  temp->next=newnode;
	   newnode->prev=temp;
     }
      return head;
   }
 int main()
  {
   int val,pos;
   struct node * head=NULL;
    clrscr();
   head=create(head);
   disp(head);

  printf("\n enter value");
  scanf("%d",&val);
  printf("\n enter pos");
  scanf("%d",&pos);
 head=insert(head,val,pos);
  disp(head);
    getch();
   }

