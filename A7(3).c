#include<stdio.h>
int main()
{
    int n, pervious=0,current =1,next=0;
    printf("Enter a number :");
    scanf("%d",&n);
    for(int i=1;i<n-1;i++)
    {
        next=pervious+current;
        pervious=current;
        current=next;
        if(next==n)
        {
            printf("Number is found in fabonnci serious");
            break;
        }
        if(next>n)
        {
            printf("number is not found");
            break;
        }
    }
    return 0;

}
