/*NAME:VEDANT VILAS PATIL
CLASS:SY-A
ROLL NO:146
BATCH:3*/
#include<stdio.h>
int main()
{
int A[10][10],row,cols,i,j,z=0,nz=0;
printf("Enter the no.of rows:");
scanf("%d",&row);
printf("Enter the no.of column:");
scanf("%d",&cols);
printf("Enter elements of matrix : ");
for(i=0;i<row;i++)
for(j=0;j<cols;j++)
{
scanf("%d",&A[i][j]);
}

for(i=0;i<row;i++)
{
printf("\n");
for(j=0;j<cols;j++)
{
printf("%d\t",A[i][j]);
}
}

for(i=0;i<row;i++)
for(j=0;j<cols;j++)
{
if(A[i][j]==0)
{
z++;
}
else 
nz++;
}
if(nz>z)
{
printf("\n\nEntered matrix is not sparse matrix\n");
}
else
{
printf("\n\nEntered matrix is sparse matrix\n");
printf("\nrows\t column\t element");
for(i=0;i<row;i++){
for(j=0;j<cols;j++)
{
if(A[i][j]!=0)
printf("\n%d\t %d\t %d\n",i,j,A[i][j]);
}
}
}
return 0;
}
/*OUTPUT
Enter the no.of rows:3
Enter the no.of column:3
Enter elements of matrix : 0 0 0 1 0 2 0 2 0

0       0       0 
1       0       2
0       2       0

Entered matrix is sparse matrix

rows     column  element
1        0       1

1        2       2

2        1       2*/