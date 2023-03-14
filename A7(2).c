#include<stdio.h>
int main()
{
   int n,i,current=1,pervious=0,next=0;
   printf("Enter a number :");
   scanf("%d",&n);
   printf("1 ");
   for(i=0;i<n-1;i++)
   {
       next=pervious+current;
       printf("%d ",next);
       pervious=current;
       current=next;
   }
   return 0;
}
