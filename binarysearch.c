/*name:Aditya Chandravanshi
class:sy-A
roll no:106
batch:s1*/
#include<stdio.h>
int  binarysearch();//function initialization
 int size,array[100];//initialization of array
  int adi=0;
void main(){
   
printf("enter the array size\n");//size input
scanf("%d",&size);
printf("enetr the array element in asscending order\n");
for(int i=0;i<size;i++){
    scanf("%d",&array[i]);//array input in ascening order only
}
binarysearch();//function call
if(adi==1){
    printf("element found \n");
}
else{
    printf("element not found \n");
}
}
 int binarysearch(){//function 
    int low=0;
    int high=size-1;
    int element;
  
    printf("enter the element which you want to find :\n");
    scanf("%d",&element);
    while(low<=high){
   int mid=(low+high)/2;//finding mid 
if(element==array[mid]){
    return adi=1;
    break;
}
else if(element<array[mid]){//conditions
    high=mid-1;
}
else{
    low=mid+1;
}

}
}
/*enter the array size
5
enetr the array element in asscending order
1
2
2
3
4
enter the element which you want to find :
4
element found 
PS C:\aditya\118> gcc binarysearch.c
PS C:\aditya\118> ./a.exe
enter the array size
6
enetr the array element in asscending order
1
2
3
4
5
6
enter the element which you want to find :
8
element not found*/