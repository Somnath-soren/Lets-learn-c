#include<stdio.h>
int sum(int a, int b)
{
  return a+b;
}
int main()
{
  int a,b,c;
  printf("Enter 1st number \n");
  scanf("%d",&a);
  printf("Enter 2nd number\n");
  scanf("%d",&b);
  
  c=sum(a,b);

  printf("Sum of two number is %d\n",c);

  return 0;
}
