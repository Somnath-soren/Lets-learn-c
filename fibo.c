#include<stdio.h>
int fib_itretive(int n)
{
  int a=0;
  int b=1;
  for(int i=0;i<n-1;i++)
  {
     b=a+b;
     a=b-a;
  }
  return a;
}

int main()
{
  int num;
  printf("Enter the number want fibnacci number\n");
  scanf("%d",&num);
  printf("The number %d of fibnacci series fib_itretive is %d\n",num,fib_itretive(num));
  return 0;
}
