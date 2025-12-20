#include<stdio.h>
int main()
{
int a,b,c;
printf("enter two digit:");
scanf("%d",&a);
b=a/10;
c=a%10;
printf("reverse = %d%d",c,b);
return 0;
}
