#include<stdio.h>

int main()
{
  int num,index=0,sum=0;
  printf("Enter the number that you want \n");
  scanf("%d",&num);
  while (index<num)
  {
    printf("%d\n",index);
    sum=sum+index;
    index++;
  }
  printf("Sum of the number is %d\n",sum);
  return 0;
}
