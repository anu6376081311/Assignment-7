#include<stdio.h>
int main()
{
    int n,i,a,b,hcf=1;
    printf("Enter two number :");
    scanf("%d %d",&a,&b);
    int min = a < b ? a : b;
    for(i=1;i<=min;i++)
    {
        if((b % i == 0) && (b % i == 0))
        {
            hcf=i;
        }
    }
    if(hcf==1)
    {
        printf("Given number is coprime");
    }
    else
    {
        printf("Given number is not coprime");
    }
    return 0;
}
