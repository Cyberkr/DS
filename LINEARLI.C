#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
typedef struct nodetype
{
 int info;
 struct nodetype *next;
 }node;
 void createEmptylist(node **head);
 void traverseinorder(node *head);
 void InsertAtBeginning(node **head,int item);
 void main()
 {
   node *head;
   int choice,element,after;
   clrscr();
   createEmptylist(&head);
   while(1){
   printf("1 insert at beg");
   printf("2 traverse");
   printf("enter choice");
   scanf("%d",&choice);
   switch(choice)
   {
   case 1:printf("enter element");
   scanf("%d",&element);
   InsertAtBeginning(&head,element);
   break;
   case 2:if(head==NULL)
   printf("\n list empty");
   else
   traverseinorder(head);
   case3:exit(0);
   }
   }}
   void createEmptylist(node **head){
   *head =NULL;}
   void InsertAtBeginning(node ** head,int item){
   node *ptr;
   ptr=(node*)malloc(sizeof(node));
   ptr->info=item;
   if(*head==NULL)
   ptr->next=NULL;
   else
   ptr->next=*head;
   *head=ptr;
   }
   void traverseinorder(node *head){
   while(head!=NULL){
   printf("\n %d",head->info);
   head=head->next;
   }
   }