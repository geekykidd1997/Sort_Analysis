#include<stdio.h>
#include "sorting.c"
#include<stdlib.h>

void main()
{
  int n,i,counter;  //count will have the count of number of comparisons
  scanf("%d",&n);

  int *A = malloc(sizeof(int)*n);
  for(i=0; i<n;i++)
   {
     scanf("%d",&A[i]);
   }

  
   counter = selection(A,n);

   printf("%d \n",counter);

   return;

}
