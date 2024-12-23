#include <stdio.h>
int main()
{
 int n,i;
 long int fact=1;
printf("enter the n value\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    fact=fact*i;
}
printf("the factroial is %d",fact);
    return 0;
}
