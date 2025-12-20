#include<stdio.h>
int main()
{
int a,b,c,d;
printf("enter three digit:");
scanf("%d",&a);
b=a/100;
c=(a/10)%10;
d=a%10;
printf("reverse = %d%d%d",d,c,b);
return 0;
}
