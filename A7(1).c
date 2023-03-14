i#include<stdio.h>
int main()
{
    int n,pervious=0,current =1,next=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<n-1;i++)
    {
        next=pervious+current;
        pervious=current;
        current=next;

    }
    printf("%d",next);
    return 0;
}
