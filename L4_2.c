#include<stdio.h>
int main()
{
int x=6;
loop:if(x>1)
{
int y=x-1;
x--;
printf("\n%d",y);
goto loop;
}
return 0;
}
