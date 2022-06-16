#include<stdio.h>

int main()
{
  int num,sum=0;
  printf("Enter number to sum till \n");
  scanf("%d",&num);
  for(int i=0;i<=num;i++)
  {
    sum=sum+i;
  }
  printf("Sum of %d is= %d\n",num,sum);
  return 0;
}
