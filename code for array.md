// Online C compiler to run C program online

\#include <stdio.h>



int main()

{

&nbsp;   int n, i, j;

&nbsp;   int arr\[50];



&nbsp;   printf("Enter number of elements: ");

&nbsp;   scanf("%d", \&n);



&nbsp;   printf("Enter array elements:\\n");

&nbsp;   for(i = 0; i < n; i++)

&nbsp;   {

&nbsp;       scanf("%d", \&arr\[i]);

&nbsp;   }



&nbsp;   printf("Values which are factors of some elements:\\n");



&nbsp;   for(i = 0; i < n; i++)

&nbsp;   {

&nbsp;       for(j = 0; j < n; j++)

&nbsp;       {

&nbsp;           if(i != j \&\& arr\[j] % arr\[i] == 0)

&nbsp;           {

&nbsp;               printf("%d ", arr\[i]);

&nbsp;               break;   // avoid duplicate printing

&nbsp;           }

&nbsp;       }

&nbsp;   }



&nbsp;   return 0;

}

