#include<stdio.h>
#include <stdlib.h>
void insert_at_beggning();
void insert_at_end();
void insert_at_given_position();
void delete_from_beggning();
void delete_from_end();
void delete_from_given_position();
void search();
void display();
int element ,position,n;
struct node
    {   struct node*prev;
        int data;
        struct node*next;
    };
    struct node*head=NULL;
void main(){
     int choice;
    
    do{
    printf("1.insert at beg\n");
    printf("2.insert at end \n");
    printf("3.insert at given position\n");
    printf("4.delete from beg\n");
    printf("5.delete from end\n");
    printf("6.delete from given position\n");
    printf("7.search\n");
    printf("8.display\n");
    printf("9.exit\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
    
        switch(choice){
            case 1:
            printf("enter the element:");
            scanf("%d",&element);
            insert_at_beggning();
            break;
            case 2:
            printf("enter the element you want to insert: ");
            scanf("%d",&element);
            insert_at_end();
            break;
            case 3: printf("enter the position :");
            scanf("%d",&position);
            printf("enter the element you want to insert :");
            scanf("%d",&element);
            insert_at_given_position();
            break;
            case 4:delete_from_beggning();
            break;
            case 5:delete_from_end();
            break;
            case 6: printf("enter the position:");
            scanf("%d",&n);
            delete_from_given_position();
            break;
            case 7: printf("enter the element which you want to search:");
            scanf("%d",&element);
            search();
            break;
            case 8:display();
            break;
            default:
            printf("exiting the program.....\n");

        }
    }while(choice<9);
    
}
void insert_at_beggning(){
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
    temp->prev=NULL;
    if(head!=NULL){
        head->prev=temp;
    }
    temp->next=head;
    head=temp;
}
void insert_at_end(){
struct node*temp,*temp1;
temp=(struct node*)malloc(sizeof(struct node));
temp->data=element;
temp->next=NULL;
if(head==NULL){
    head=temp;
    temp->prev=NULL;
}
else{
temp1=head;
while(temp1->next!=NULL){
    temp1=temp1->next;
}
temp1->next=temp;
temp->prev=temp1; 
}
}
void insert_at_given_position(){
    struct node*temp,*temp1;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=element;
   if(head==NULL){
    temp->prev=head;
    temp->next=head;
   head=temp;
   }
   else{
    temp1=head;
    for(int i=1;i<position-1;i++){
        temp1=temp1->next;
    }
    temp->next=temp1->next;
    temp->prev=temp1;
    temp1->next->prev=temp;
    temp1->next=temp;
   }

}
void delete_from_beggning(){
    struct node *temp,*temp1;
     temp=head;
    if (head==NULL)
    {
        printf("List is Empty\n");
    }
    else if(temp->next==NULL)
    {
     head=NULL;
     free(temp);
    }
    else
    {
     temp1=temp->next;
     head=temp1;
     temp1->prev=NULL;
     free(temp);
     
    }
}
void delete_from_end()
{
    struct node* temp,*temp1;

    if(head==NULL)
    {
        printf("List is Empty\n");

    }
    else if(head->next==NULL)
    { 
        free(head);
        head=NULL;
    }
    else
    {
    
    temp=head;

    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
   
    free(temp);
    }
}
void  delete_from_given_position(){
    struct node*temp,*temp1;
   
     if(head==NULL)
    {
        printf("List is Empty\n");
    }
    else if (n == 1) 
    {
        temp = head;
        head = temp->next;
        
        free(temp);
    } 
    else 
    {
        temp = head;
        for (int i = 1; i < n-1 ; i++) 
        {
            if (temp == NULL || temp->next == NULL) return;
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = temp1->next;
       temp1->next->prev=temp;
        free(temp1);
    }
 }
  void search(){
    int floor=0;
   
    if (head==NULL){
printf("list is empty\n");
    }
    else{
        struct node*temp;
        temp=head;
        while(temp!=NULL)
        {
           if(element == temp->data)
           {
              floor=1;  
              break;   
           }
           else
           { 
               temp=temp->next;   
           }
        }
        if(floor==1){
            printf("element is found\n");
        }
        else{
            printf("element not found\n");
        }
    } 
 }
void display(){
      if (head==NULL){
printf("list is empty\n");
    }
    else{
        
        struct node*temp;
        printf("head is %p\n",head);

        temp=head;
        while(temp!=NULL){
            
            printf("%d\t",temp->data);
            printf("%p\t",temp);
             printf("%p\t",temp->prev);
            printf("%p\t",temp->next);
           
            printf("\n");
              temp=temp->next;
        }
        }
        printf("\n");
 }
 