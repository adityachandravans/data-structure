/*name:Aditya Balasaheb Chandravanshi
class:sy-a
roll no:106
*/
#include<stdio.h>
int size,i,element;
int queue[100];
int front=-1;
int rear=-1;
int choice;
void insert();
void delete();
void display();
void main(){
    printf("enetr the size of stack\n");
    scanf("%d",&size);
 
    do{
           printf("1.insert\n2.delete\n3.display\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
switch(choice){
    case 1:insert();
    break;
    case 2:delete();
    break;
    case 3:display();
    break;
    default:printf("exit\n");

}
}while(choice<4);

}
void insert(){
    if(rear==-1){
        front=0;
        rear=0;
        printf("enter the element\n");
        scanf("%d",&element);
        queue[rear]=element;
    }
    else if(rear==size-1){
        printf("queue is full\n");
    }
    else{
         printf("enter the element\n");
        scanf("%d",&element);
        rear++;
        queue[rear]=element;
    }
}
void delete(){
    if(front==-1){
        printf("queue is empty\n");
    }
    else if(front==rear){
        element=queue[front];
        printf("deleted element is %d\n",element);
        front=rear=-1;
    }
    else{
        element=queue[front];
        printf("deleted element is %d\n",element);
        front++;

    }
}
void display(){
    if(rear==-1){
        printf("queue is empty\n");
    }
    else{
 for(i=rear;i>=front;i--){
    printf("%d\n",queue[i]);

 }}

}
/*enetr the size of stack
5
1.insert
2.delete
3.display
enter the choice
1
enter the element
99
1.insert
2.delete
3.display
enter the choice
1
enter the element
97
1.insert
2.delete
3.display
enter the choice
2
deleted element is 99
1.insert
2.delete
3.display
enter the choice
3
97
1.insert
2.delete
3.display
enter the choice
4
exit*/