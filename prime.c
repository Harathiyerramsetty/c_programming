// Online C compiler to run C program online
#include <stdio.h>
int main()
{
int n,i,count=0;
printf("enter the n value\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        count++;
   }
}
if(count==2)
{
    printf("number is prime");
}
else
{
    printf("number is not prime");
}
    return 0;
}
