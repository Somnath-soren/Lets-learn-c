#include<stdio.h>

void Add(int a,int b)
{
  int sum;
  printf("Sum = %d\n",a+b);
}
int main()
{
  int a, b,sum=0;
 printf("Enter the value of a\n");
 scanf("%d",&a);
 printf("Enter the value of b\n");
 scanf("%d",&b);
 Add(a,b);
 return 0;
}
