#include<stdio.h>
int main()
{
int num,i=1;
loop:if(i<=9)
{
if(i%2==1)
{
num=i;
printf("\n%d",num);


}
i++;
goto loop;
}
return 0;
}
