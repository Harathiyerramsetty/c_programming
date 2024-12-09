#include <stdio.h>

int main() 
{
    int i,n,sumeven=0,sumodd=0;
    printf("enter the n values:");
    scanf("%d",&n);
    for(i=0;i<=n;++i)
    {
        if(i%2==0)
        {
    sumeven=sumeven+i ;
        }
        else
        {
    sumodd=sumodd+i;        
        }
    printf("the difference is %d",abs(sumeven-sumodd));
    }
    return 0;
}
