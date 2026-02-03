#include<stdio.h>
void main ()
{
int columns;
int rows;
printf (" enter no of rows : \n");
scanf("%d",&rows);
printf("enter no of columns : \n");
scanf("%d",&columns);
for ( int i=1;i<=rows;i++)
{
for ( int j=1;j<=columns;j++)
{
if (i==1||i==rows||j==1||j==columns)
{
printf("* ");
}
else
{
printf("  ");
}
}
printf("\n");
}
}