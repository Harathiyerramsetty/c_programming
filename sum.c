#include <stdio.h>

int main() 
{
    int i,n,sum=0;
    printf("enter the n values:");
    scanf("%d",&n);
    for(i=0;i<=n;++i)

    {
    sum=sum+i ;                          
    }  
    printf("the sum is %d",sum);
    return 0;
}
