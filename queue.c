#include<stdio.h>
int size,item,element,i,front=-1,rear=-1;
int queue[200];
int choice;
void enqueue();
void dqueue();
void display();
void main(){
    printf("enetr the size of stack\n");
    scanf("%d",&size);
 do{
           printf("1.insert\n2.delete\n3.display\n");
    printf("enter the choice\n");
    scanf("%d",&choice);
switch(choice){
    case 1:enqueue();
    break;
    case 2:dqueue();
    break;
    case 3:display();
    break;
    default:printf("exit\n");

}
}while(choice<4);
}
    void enqueue(){
        if(rear==size-1){
            printf("queue is full\n");
        }
        else if(rear==-1){
            front=0;rear=0;
            printf("enter the element \n");
            scanf("%d",element);
            queue[rear]=element;
        }
        else{
              printf("enter the element \n");
            scanf("%d",element);
            rear++;
            queue[rear]=element;
        }
    }

    void dqueue(){
        int item;
        if(front==-1){
            printf("queue is empty\n");
        }
        else if(front==rear){
            item=queue[front];
            front=rear=-1;
        }
        else{
            item=queue[front];
            front++;
        }
    }
    void display(){
        if(front==-1){
            printf("queue is empty\n");
        }
        else{
            for(i=front;i<=rear;i++){
                printf("%d",queue[i]);
            }
        }
    }