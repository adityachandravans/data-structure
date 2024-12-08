/*NAME:ADITYA CHANDRAVANSHI
CLASS:SY -A
ROLL NO:106
BATCH:S1*/
#include<stdio.h>
#include <stdlib.h>
void insert_at_beg();
void insert_at_end();
void insert_at_given_pos();
void delete_from_beg();
void delete_from_end();
void delete_from_given_pos();
void search();
void display();
int element ,pos,n;
struct node
    {
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
            printf("enter the element \n");
            scanf("%d",&element);
            insert_at_beg();
            break;
            case 2:
            printf("enter the element you want to insert\n");
            scanf("%d",&element);
            insert_at_end();
            break;
            case 3: printf("enter the position \n");
            scanf("%d",&pos);
            printf("enter the element you want to insert \n");
            scanf("%d",&element);
            insert_at_given_pos();
            break;
            case 4:delete_from_beg();
            break;
            case 5:delete_from_end();
            break;
            case 6: printf("enter the position \n");
            scanf("%d",&n);
            delete_from_given_pos();
            break;
            case 7: printf("enter the element which you want to search\n");
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
  
void insert_at_beg(){

struct node*temp;
temp=(struct node*)malloc(sizeof(struct node*));
temp->data=element;
temp->next=head;
head=temp;
}
void insert_at_end(){

struct node *temp,*temp1;
temp=(struct node*)malloc(sizeof(struct node*));
temp->data=element;
temp->next=NULL;
if(head==NULL){
    head=temp;
}
else{
    temp1=head;
    while(temp1->next!=NULL)
    {
        temp1=temp1->next;
    }
    temp1->next=temp;
}

}
void insert_at_given_pos(){
    
   
   
    if(pos==1){
        insert_at_beg();
    }
    else{
         struct node *temp,*temp1;
    temp=(struct node*)malloc(sizeof(struct node*));
    temp->data=element;
        temp1=head;
        for(int i=1;i<pos-1;i++){
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next=temp;
    }
}
void delete_from_beg()
{
   

    if (head==NULL)
    {
        printf("List is Empty\n");

    }
    else
    {
     struct node* temp;
     temp=head;
     head=temp->next;
    
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
 void delete_from_given_pos(){
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
        for (int i = 1; i < n - 1; i++) 
        {
            if (temp == NULL || temp->next == NULL) return;
            temp = temp->next;
        }
        temp1 = temp->next;
        temp->next = temp1->next;
       
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
            printf("%p\t",temp->next);
            printf("\n");
              temp=temp->next;
        }
        }
        printf("\n");
 }
/*OUTPUT:
1.insert at beg
2.insert at end 
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
1
enter the element 
99
1.insert at beg
2.insert at end 
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
2
enter the element you want to insert
87
1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
3
enter the position
2
enter the element you want to insert
55
1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
1
enter the element
66
1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
8
head is 00B00C80
66      00B00C80        00B02F90
99      00B02F90        00B00C70
55      00B00C70        00B00C60
87      00B00C60        00000000

1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
4
1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
8
head is 00B02F90
99      00B02F90        00B00C70
55      00B00C70        00B00C60
87      00B00C60        00000000

1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
5
1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
8
head is 00B02F90
99      00B02F90        00B00C70
55      00B00C70        00000000

1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
6
enter the position
2
1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
8
head is 00B02F90
99      00B02F90        00000000

1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
7
enter the element which you want to search
99
element is found
1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
7
enter the element which you want to search
66
element not found
1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
8
head is 00B02F90
99      00B02F90        00000000

1.insert at beg
2.insert at end
3.insert at given position
4.delete from beg
5.delete from end
6.delete from given position
7.search
8.display
9.exit
enter the choice
9
exiting the program.....*/