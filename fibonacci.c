#include <stdio.h>
int main() 
{
    int n,i,a=0,b=1,c;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=2;i<n;++i)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    printf("Print the value of c is %d",c);
return 0;
}
