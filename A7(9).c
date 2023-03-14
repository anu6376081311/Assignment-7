#include<stdio.h>
int main()
{
    int n ,r,temp,sum=0;
    printf("Enter anumber :");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==temp)
    {
    printf("Entered number is a armstrong number");
    }
    else
    {
        printf("Entered number is not a armstrong number ");
    }
     return 0;
}
