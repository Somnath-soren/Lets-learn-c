#include<stdio.h>

int main()
{
int a;
printf("Enter the number want to print\n");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
if(a<10) // i>10 time print also 10
{
  break ;
}
printf("%d\n",i);
}
return 0;
}
