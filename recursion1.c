#include<stdio.h>

int fib_recursion(int number)
{
  if (number==1|| number==2)
  {
    return number-1;
  }
else
return fib_recursion(number-1) + fib_recursion(number-2);
}
int fib_itretive(int number)
{
   int a=0;
   int b=1;
  for(int i=0;i<number-1;i++)
  {
     b=a+b;
     a=b-a;
  }
  return a;
}
int main()
{
  int num;
  printf("Enter the number to find fibnacci number");
  scanf("%d",&num);
  printf("The number %d of fibnacci series fib_itretive is %d\n",num,fib_itretive(num));
  printf("The fibnacci number of %d is %d\n",num,fib_recursion(num));
  return 0;
}
