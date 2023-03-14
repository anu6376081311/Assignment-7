#include<stdio.h>
int main()
{
    int i,a,b,HCF;
    printf("Enter the value of a and b :");
    scanf("%d %d",&a,&b);
    int min=a<b ? a : b ;
    for(i=1;i<=min;i++)
    {
        if((a%i==0) && (b%i==0))
        {
            HCF=i;
        }

    }
    printf("The HCF of the given number is %d",HCF);
    return 0;
}
