#include<stdio.h>

int main()
{
int age;

for(int i=0;i<10;i++)
{
  printf("%d\n Enter your age\n",i);
  scanf("%d", &age);
if(age>10) // i>10 time print also 10
{
  continue;
}
printf(" your age is %d\n",age);
}
return 0;
}
