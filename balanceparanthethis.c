/*name:Aditya Balasaheb Chandravanshi
class:sy-a
roll no:106
*/

#include<stdio.h>
#include<string.h>
void push(char ch);
void pop();
char stack[100];
char expression[100];
int element,i,item,top=-1,size=100;
void main(){
printf("enter the expression\n");
scanf("%s",expression);
int length=strlen(expression);
for(i=0;i<length;i++){
    char ch;
    ch=expression[i];
    if(ch=='{'||ch=='['||ch=='('){
        push(ch);
    }
    else{
        if(ch=='}'||ch==']'||ch==')'){

            if(ch=='}'&& stack[top]=='{'){
                pop();
            }else if(ch==']'&&stack[top]=='['){
                pop();
            }
            else if(ch==')'&& stack[top]=='('){
                pop();
            }
            else {
                push(ch);
            }
            
        }
    }
    
}
if(top==-1){
    printf("balanced");
}
else{
    printf("imbalanced");
}
}
void push( char ch){
    if(top<size-1){
        top++;
        stack[top]=ch;
       
    }
    else{
        printf("stack overflow\n");
    }
}
void pop(){
    if(top==-1){
        printf("stack underflow\n");
    }
    else{
        element=stack[top];
        top--;
       
    }
} 
/*enter the expression
{}
balanced
enter the expression
{{}
imbalanced
enter the expression
{}}
imbalanced
*/