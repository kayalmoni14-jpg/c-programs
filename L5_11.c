#include<stdio.h>
int main()
{
int i,num,count=0,digit;
printf("enter a number:");
scanf("%d",&num);
for(i=num;i>0;i++)
{
digit=num/10;
count++;
i=num/10;


printf("%d",count);
}
return 0;
}
