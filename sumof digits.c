#include <stdio.h>

int main() 
{
    int n,sum=0,rem;
    printf("enter the  value of n:");
    scanf("%d",&n);
    
        while(n>0)
    {    
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }    
    printf("sum of the digits is%d",sum);
        return 0;
}
