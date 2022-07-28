#include<stdio.h>

int Iterativefact(int n)
{
  int val=1;
  for(int i=n;i>1;i--)
  {
    val*=i;
  }
  return val;
}

int Recursivefact(int n)
{
  if(n==0 || n==1)
  {
    return 1;
  }
  else
  {
    return n*Recursivefact(n-1);
  }
}
int main()
{
  int num;
  int factorial;
  printf("Enter the number want to factorial\n");
  scanf("%d",&num);
  factorial = Recursivefact(num);
  // factorial = Iterativefact(num);
  printf("Value is %d \n",factorial);

  return 0;
}
