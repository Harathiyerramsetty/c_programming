#include <stdio.h>
int main() 
{
    int n, sum=0,temp,rem;
    temp=n;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(n>10)
    {
        rem=n%10*(rem*rem*rem);
        sum=sum+rem;
        n=n/10;
    }
        if(temp=sum)
    {
        printf("the numbers is armstrong");
    }
    else
    {
        printf("the numbers is not armstrong");
    }
return 0;
}
