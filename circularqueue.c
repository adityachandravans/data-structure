
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
    else if(front==(rear+1)%size){
        printf("queue is full\n");
    }
    else{
         printf("enter the element\n");
        scanf("%d",&element);
        rear=(rear+1)%size;
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
        front=(front+1)%size;

    }
}
void display(){
    if(rear==-1){
        printf("queue is empty\n");
    }
   else{
    int i=front;
    while (i!=rear)
    {
        printf("%d\n",queue[i]);
        i=(i+1)%size;
    }
    
   }
}
