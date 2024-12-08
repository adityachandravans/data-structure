/*Name:Aditya Chandravanshi
   Class:sy-01,Batch:sy-1
    Roll No:106                */
#include<stdio.h>
int a[100], i, pos, size, item,n;//initilization of function and variable globaly
void insert( int pos,int item);
void delete(int pos,int item);
void insert_at_end(int item);
void delete_at_end(int item);
void search(int item);
void display();
void main()
{
    printf("enter the size of an array\n");//size and aaray input 
    scanf("%d",&size);
    printf("enter the elemnent\n");
    for (i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    do{
        printf("  1-insert at given position\n");//operation which can be perform
        printf("  2-delete at given position\n");
        printf("  3-insert at the end\n ");
        printf("  4-delete at the end\n ");
        printf(" 5-search\n");
        printf(" 6-display\n");
        printf("enter the choice\n");
        scanf("%d",&n);
       switch(n)//cases and calling of function
       {
        case 1:printf("enter the position\n ");
               scanf("%d",&pos);
               insert( pos ,item);
               break;
        case 2:printf("enter the position\n ");
               scanf("%d",&pos);
               item =a[pos-1];
               delete(pos ,item);
               break;
        case 3:printf("enter the elment in an array\n");
               scanf("%d",&item);
               insert_at_end(item);
               break;
        case 4:item=a[size-1];
               delete_at_end(item);
               break;
        case 5:printf("enter the item\n");
               scanf("%d",&item);
               search(item);
               break;
        case 6:display();
               break;
        default:
               printf("Exited\n");
               break;
       }
    }while(n<=6);
}
    

void insert(int pos,int item)//function of insert at given position
{
    if(pos<size){
        printf("enter the element\n");
               scanf("%d",&item);
    for(i=size;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=item;
    size++;
     display();}
     else{
        printf("invalid position\n");
     }
} 
void delete(int pos,int item)//function of delete at given position
{
    if(pos<size){
    for (i=pos-1;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    display();}
    else{
        printf("invalid position\n");
    }
}
void insert_at_end(int item)//function of insert at end
{
    size++;
    a[size-1]=item;
     display();
}
void delete_at_end(int item)//function of delete at end 
{
size--;
 display();
}
void search(int item)//function of searching of element
{ 
    for (i=0;i<size;i++)
    {
        if (item==a[i])
        {
            printf("item found\n");
            break;
        }  
    }  
}
void display()//function of display of array
{
    for (i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
//output of above program
/*enter the size of an array
5
enter the elemnent
1
2
3
4 
5
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
1
enter the position
 3
enter the element
99
1
2
99
3
4
5
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
2
enter the position
 9
invalid position
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
2
enter the position
 3
1
2
3
4
5
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
2
enter the position
 9
invalid position
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
3
enter the elment in an array
99
1
2
3
4
5
99
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
4
1
2
3
4
5
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
5
enter the item
5
item found
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
6
1
2
3
4
5
  1-insert at given position
  2-delete at given position
  3-insert at the end
   4-delete at the end
  5-search
 6-display
enter the choice
7
Exited */
